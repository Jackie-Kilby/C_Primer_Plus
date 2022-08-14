/* VLA : Variable Length Array. New concept in C99.
 * VLA must be auto type variable.
 * VLA can not be initialized when declaration.*/

#include <stdio.h>
#define ROWS	3
#define COLS	4


int sum2d(int rows, int cols, int arr[rows][cols])
{
	int r = 0;
	int c = 0;
	int tot = 0;

	for (r=0 ; r<rows ; r++) {
		for (c=0 ; c<cols ; c++) {
			tot += arr[r][c];
		}
	}

	return tot;
}

int main(void)
{
	int rs = 4;
	int cs = 3;
	int i = 0;
	int j = 0;

	int junk[ROWS][COLS] = {
		2,4,6,8,
		1,3,5,7,
		10,12,9,8
	};

	int morejunk[ROWS-1][COLS+2] = {
		2,4,6,8,10,12,
		1,3,5,7,9,11
	};

	int vla[rs][cs];

	for (i=0 ; i<rs ; i++) {
		for (j=0 ; j<cs ; j++) {
			vla[i][j] = i*j+i;
		}
	}

	printf("sum of array 1\n");
	printf("%d\n", sum2d(ROWS, COLS, junk));

	printf("sum of array 2\n");
	printf("%d\n", sum2d(ROWS-1, COLS+2, morejunk));

	printf("sum of vla\n");
	printf("%d\n", sum2d(rs,cs,vla));

	return 0;
}
