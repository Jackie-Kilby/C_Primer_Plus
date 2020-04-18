/* Calculate the sum square of a range of number */
#include <stdio.h>
#include <stdbool.h>

/* Not same with BOOK, but I think this is also right */
#define VALID_MIN	-10000000
#define VALID_MAX	 10000000

static bool is_limit_bad(long begin, long end);
static double get_sum_square_double(long begin, long end);
static long get_sum_square_long(long begin, long end);
static long get_long(void);

int main(void)
{
	long begin = 0, end = 0;
	do {
		printf("Please input the range :\n");
		//Get the range [begin,end]
		printf("low limit:");
		begin = get_long();
		printf("high limit:");
		end = get_long();
		//Judge the range available.
	} while(is_limit_bad(begin,end));

	//Calculate the sum and output
	double sum_square_double = get_sum_square_double(begin, end);
	long sum_square_long = get_sum_square_long(begin, end);

	printf("sum_square_double = %f\r\n", sum_square_double);
	printf("sum_square_long = %ld\r\n", sum_square_long);

	return 0;
}

static bool is_limit_bad(long begin, long end)
{
	bool not_good = false;

	/* Not same with BOOK, but I think this is also right */
	if (begin < VALID_MIN || end > VALID_MAX) {
		printf("The range is outof scope.\r\n");
		not_good = true;
	}
	if(begin > end){
		printf("The range is not reasonable.\r\n");
		not_good = true;
	}

	return not_good;
}

static double get_sum_square_double(long begin, long end)
{
	long i = 0;
	double sum_square = 0;
	for (i=begin ; i<=end ; i++) {
		sum_square += (double)i*(double)i;
	}

	return sum_square;
}

static long get_sum_square_long(long begin, long end)
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
		putchar('\"');
		while((ch = getchar()) != '\n')
			putchar(ch);
		putchar('\"');
		printf(" is not an integar, please input again:\r\n");
	}

	return input;
}
