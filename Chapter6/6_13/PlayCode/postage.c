#include <stdio.h>

int main(void)
{
	int const FIRST_OZ = 46;
	int const NEXT_OZ = 20;
	int ounces, cost;

	printf("Onces cost\n");
	for(ounces = 1, cost = FIRST_OZ; ounces <= 16; cost += NEXT_OZ, ounces++)
		printf("%-5d $%4.2f\n", ounces, cost/100.0);

	return 0;
}
