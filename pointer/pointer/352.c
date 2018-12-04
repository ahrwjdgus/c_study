#include <stdio.h>

int main(void)
{
	int number = 10;
	int *p;

	p = &number;
	printf("변수 number의 값 = %d\n", p);

	*p = 20;
	printf("변수 number의 값 = %d\n", number);

	system("PAUSE");
}