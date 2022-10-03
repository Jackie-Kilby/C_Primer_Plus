#include <stdio.h>

#define STR(x)	#x
#define SHOW_VARIABLE_VALUE(x)	printf("Variable "#x" value is %d.\n",x)
#define SHOW_ENUM_VALUE(x)    printf("Enum " #x "is %s.\n", #x);


int main(void)
{
	int v = 10;

	enum {
		STATE_1,
		STATE_2,
		STATE_DEFAULT,
	}e_local;

	e_local = STATE_2;

	
	printf("Print String: %s.\n", STR(This is a string));
	SHOW_VARIABLE_VALUE(v);
	SHOW_ENUM_VALUE(e_local);
	

	return 0;
}
