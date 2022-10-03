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
	int x = TWO;				//int x = 2;
	PX;							//printf("X is %d\n", x);

	x = FOUR;					//x = TWO*TWO;
	printf("%s\n", OW);			//printf("%s\n", "Consistency is ...");
	printf(FMT, x);				//printf("X is %d\n", x);
	printf("TWO:OW\n");			//printf("TWO:OW\n");
}
