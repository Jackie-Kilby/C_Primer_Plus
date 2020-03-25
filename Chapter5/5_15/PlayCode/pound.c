/* pound.c -- Define a function with one parameter */
#include <stdio.h>
void pound();
int main(void)
{
	int iTest = 5;
	char cTest = '!';
	float fTest = 5;

	pound(iTest);
	pound(cTest);
	pound((int)fTest);

	return 0;
}
void pound(int n)
{
	while(n-- > 0)
		printf("#");
	printf("\n");
}
