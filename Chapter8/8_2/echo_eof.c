/* echo_eof.c -- Repeat input until end of file */
#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
