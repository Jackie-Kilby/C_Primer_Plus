#include <stdio.h>

int main(void)
{
	char ch;
	int i;
	float fl;

	ch = i = fl = 'C';
	printf("ch = %c, i = %d, fl = %f\n", ch, i, fl);
	ch = ch + 1;
	i = ch*2 + fl;
	fl = ch*2 + i;
	printf("ch = %c, i = %d, fl = %f\n", ch, i, fl);
	ch = 1107;
	printf("Now ch = %c\n", ch);
	ch = 80.89;
	printf("Now ch = %c\n", ch);
	
	return 0;
}
