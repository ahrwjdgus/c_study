#include <stdio.h>
#define size 5
int main(void)
{
	int i, k;
	int list[size] = { 16,7,9,1,3 };

	for (k = 0; k < size; k++) {
		for (i = 0; i < size - 1; i++) {
			if (list[i] > list[i + 1]) {
				int tmp = list[i
];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < size; i++) {
		printf("%d", list[i]);
	}
	return 0;
}

