/* A demo to show some traits of printf() */
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Do it right:");
	printf("%d minus %d is %d.\n", ten, two, ten-two);
	printf("Do it wrong:");
	printf("%d minus %d is %d.\n", ten);	//There will be warning here, lacking 2 prarms.

	return 0;
}
