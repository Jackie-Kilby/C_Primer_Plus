/* A simple example of pre-process using #define */
#include <stdio.h>

#define TWO 2
#define PX printf("X is %d\n", x);
#define WX "Consistency is \
a new line\n"
#define FOUR TWO*TWO
#define STR "X is %d\n"
int main(void)
{
	int x = TWO;
	PX;

	printf(WX);
	printf(STR, FOUR);
	printf("Four is %d\n", FOUR);
}
