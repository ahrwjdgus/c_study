#include <stdio.h>
#define size 6

int main(void)
{
	int i, k;
	char fruits[size][20] = {
		"pineapple",
		"banana",
		"apple",
		"tometo",
		"pear",
		"avocado"
	};

	for (k = 0; k < size; k++) {
		for (i = 0; i < size - 1; i++) {
			if (strcmp(fruits[i], fruits[i + 1]) > 0) {
				char tmp[20];
				strcpy(tmp, fruits[i]);
				strcpy(fruits[i], fruits[i+1]);
				strcpy(fruits[i + 1], tmp);
			}
		}
	}
	for (k = 0; k < size; k++)
		printf("%s \n", fruits[k]);
	system("PAUSE");
}