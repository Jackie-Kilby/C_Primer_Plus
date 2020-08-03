/* Using 'continue' to calculate Average/Max/MIn of scores */
#include <stdio.h>

int main(void)
{
	const float MAX = 100.0f;
	const float MIN = 0.0f;

	float score = 0.0f;
	float min = MAX, max = MIN;
	float total = 0.0f;
	int n = 0;
	
	printf("Please input first score (q to quit): ");
	while ((scanf("%f", &score) == 1)) {
		if (score > MAX || score < MIN) {
			printf("Please input score again (q to quit): ");
			continue;
		}
		n ++;
		total += score;
		min = min < score ? min : score;
		max = max > score ? max : score;
		printf("Now please input next score(q to quit):");
	}
	printf("%d scores' avearge score is %.2f\r\n", n, total/n);
	printf("Max is %.1f, Min is %.1f\r\n", max, min);

	return 0;
}
