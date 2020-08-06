/* A simple example of pre-process using #define */
#include <stdio.h>

#define TWO 2 			//Using comment is ok
#define PX printf("X is %d\n", x);
#define OW "Consistency is the last refuge of \
the unimaginative. - Oscar Wilde"

#define FOUR TWO*TWO
#define FMT "X is %d\n"
int main(void)
{
	int x = TWO;
	PX;

	x = FOUR;
	printf("%s\n", OW);
	printf(FMT, x);
	printf("TWO:OW\n");
}
