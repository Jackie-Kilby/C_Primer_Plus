/* pound.c -- Define a function with one parameter */
#include <stdio.h>
void pound(int n);
int main(void)
{
	int iTest = 5;
	char cTest = '!';
	float fTest = 5;

	pound(iTest);
	pound(cTest);
	pound(fTest);

	return 0;
}
void pound(int n)
{
	unsigned int i = 0;
	for (i=n ; i>0 ; i--) {
		printf("#");
	}
	printf("\n");
}
