#include <stdio.h>
#define rows 3
#define cols 3

int main(void)
{
	int r, c;

	int A[rows][cols] = { {1,0,0},{0,1,0},{0,0,1} };
	int B[rows][cols] = { {1,0,0},{0,1,0},{0,0,1} };
	int C[rows][cols];

	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++) {
			C[r][c] = A[r][c] + B[r][c];
			printf("%d", C[r][c]);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}