#include <stdio.h>

int main(void)
{
	int const FIRST_OZ = 46;
	int const NEXT_OZ = 20;
	int ounces, cost;

	printf("What's the weight of your package?\n");
	while (1 != scanf("%d", &ounces)) {
		printf("Sorry, please check your input is an integar, and input again:");
	}
	cost = FIRST_OZ + (ounces - 1) * NEXT_OZ;
	printf("The cost is %.2f\n", cost/100.0);

	return 0;
}
