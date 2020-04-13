/* Calculate the sum square of a range of number */
#include <stdio.h>

#define VALID_MIN	-10000000
#define VALID_MAX	 10000000

static int is_limit_ok(long begin, long end);
static long get_sum_square(long begin, long end);
static long get_long(void);
int main(void)
{
	long begin = 0, end = 0;
	printf("Please input the range :\n");
	//Get the range [begin,end]
	printf("low limit:");
	begin = get_long();
	printf("high limit:");
	end = get_long();
	//Judge the range available.
	if(is_limit_ok(begin,end)) {
		//Calculate the sum and output
		long sum_square = get_sum_square(begin, end);
		printf("sum_quare = %ld\r\n", sum_square);
	} else {
		printf("The limit is not good.\r\n");
	}

	return 0;
}

static int is_limit_ok(long begin, long end)
{
	int ret = 1;
	if (begin < VALID_MIN || end > VALID_MAX) {
		printf("The range is outof scope.\r\n");
		ret = 0;
	}
	if(begin > end){
		printf("The range is not reasonable.\r\n");
		ret = 0;
	}
	return ret;
}

static long get_sum_square(long begin, long end)
{
	long i = 0;
	long sum_square = 0;
	for (i=begin ; i<=end ; i++) {
		sum_square += i*i;
	}

	return sum_square;
}

static long get_long(void)
{
	long input = 0;
	char ch = 0;

	while((scanf("%ld", &input)) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integar, please input again:\r\n");

	}

	return input;
}
