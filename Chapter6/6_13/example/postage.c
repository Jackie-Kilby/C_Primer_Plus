#include <stdio.h>

int main(void)
{
	int const FIRST_ONCE = 46;
	int const ADD_ONCE = 26;

	int onces, cost;
	for(onces = 1, cost = FIRST_ONCE; onces < 16; cost += ADD_ONCE, onces++)
		printf("once = %d, cost %4.2f\n", onces, cost/100.0);

	return 0;
}
