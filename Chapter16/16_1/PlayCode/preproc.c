/* String can be printf by #defing STRING and const char* string */
#include <stdio.h>

#define TWO 2 			//Using comment is ok

#define FMT "X is %d\n"
const char * fmt = "X is %d\n";			//PlayCode: This is also okay. Amazing!

int main(void)
{
	int x = TWO;

	//int printf(char * fmt, ...);
	printf(FMT, x);
	printf(fmt, x);
}
