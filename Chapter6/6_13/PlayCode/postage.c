#include <stdio.h>

#define ROUND_UP_METHOD	1

static float round_up(float fl);

int main(void)
{
	int const FIRST_OZ = 46;
	int const NEXT_OZ = 20;
	float ounces, cost;

	printf("What's the weight of your package?\n");
	while (1 != scanf("%f", &ounces)) {
		printf("Sorry, please check your input is an integar, and input again:");
	}
	ounces = round_up(ounces);
	cost = (FIRST_OZ + (ounces - 1) * NEXT_OZ) / 100.0;
	printf("The cost is %.2f\n", cost);

	return 0;
}
#if (ROUND_UP_METHOD == 1)
static float round_up(float fl)
{
	if ((int)fl != fl)
		return (int)fl + 1.0;
	else 
		return fl;
}
#elif (ROUND_UP_METHOD == 2)
static float round_up(float fl)
{
	if (0 != ((int)(fl*100)%100))
		return (int)fl +1.0;
	else
		return fl;
}
#endif
