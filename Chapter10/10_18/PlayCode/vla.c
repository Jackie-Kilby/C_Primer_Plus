#include <stdio.h>
/* Generate a random number matrix[r][c] and print it out, where r and c are paramters input by user.*/
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int r=0, c=0;
	
	printf("Please input matrix size with format of 'r x c' : ");
	fflush(stdout);

	scanf("%d x %d", &r, &c);
	printf("The generated array[%d,%d] is \r\n", r, c);
	
	srand(time(NULL));

	int array[r][c];
	for (int j=0; j<r; j++) {
		for (int i=0; i<c; i++) {
			array[i][j] = rand() % 100;
			printf("array[%d][%d] = %d.\r\n", i, j, array[i][j]);
		}
	}









	return 0;
}
