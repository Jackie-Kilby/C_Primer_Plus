/* A demo to show some traits of printf() */
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Do it right:\n");
	printf("%d minus %d is %d.\n", ten, two, ten-two);
	printf("Do it wrong:\n");
	printf("%d minus %d is %d.\n", ten);


	return 0;
}
