#include <stdio.h>
int main(void)
{
	int x = 100;

	printf("dec = %d, hex = %x, oct= %o.\n", x, x, x);
	printf("dec = %#d, hex = %#x, oct = %#o.\n", x, x, x);

	return 0;
}
