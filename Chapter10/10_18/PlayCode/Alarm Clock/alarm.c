/* Set Alarm with RTC at any time
 *
 * Start program.
 * List all exist alarm clocks with index, which should be saved in a file.
 * Wait for input: y means start; <num> means change; '+' meana add one.
 * This program will run continuously and poll time every a interval.
 * If alarm timeout, Beep or play a music until user input any keys.
 * */

/* Needed drivers hint
 * 1. Get real time: 
 * #include <time.h>
 * time_t t;
 * time(&t);
 * struct tm * now = localtime(&t);	//now->tm_hour...
 * 
 * 2. Alarm with PC:
 * #include <windows.h>
 * Beep(freq, time_ms);
 *
 * 3. Delay for a while without occupying CPU:
 * #include <windows.h>
 * Sleep(time_ms);
 *
 * 4. Read/Write file:
 * #include <stdio.h>
 * fopen/fread/fwrite/fseek
 * */

/* V0: Only 1 hardcode timer to alarm for 1min before get any input.
 * JIRA-1: no printf log bug wait for scanf or Beep {use fflush(stdout) after printf}
 * JIRA-2: How to get input while beeping? {Not solved, Currently stop beep use Ctrl+C}
 * */

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

typedef enum {
	ALARM_DISABLE = 0,
	ALARM_ENABLE,
} alarm_mode_t;


typedef struct {
	char hour;
	char min;
	alarm_mode_t mode;
} alarm_setting_t;


int main(void)
{
	time_t t;
	struct tm *now;
	unsigned char alarm_num;

	// List existed alarms timer
	
	// Get input and determain what to do
	alarm_num = 1;

	// Generate VLA (instead of polling read file)
	alarm_setting_t alarmsets[alarm_num];
	alarmsets[0].hour = 12;
	alarmsets[0].min = 0;
	alarmsets[0].mode = ALARM_ENABLE;

	while(1) {
		// Get current time
		time(&t);
		now = localtime(&t);

		printf("Current time is %d:%02d.\r", now->tm_hour, now->tm_min);
		fflush(stdout);
	
		// Compare current time with VLA
		for (int i=0; i<alarm_num; i++) {
			if (alarmsets[i].mode == ALARM_ENABLE && now->tm_hour == alarmsets[i].hour) {
				if (now->tm_min > alarmsets[i].min) {
					//Alarm
					alarmsets[i].mode = ALARM_DISABLE;
					Beep(1046,1000*60);
					break;
				}
			}
		}
	
		Sleep(1000);
	}

	return 0;
}
