#include <stdio.h>

int main(void)
{
	int number = 10;
	int *p;

	p = &number;
	printf("���� number�� �� = %d\n", p);

	*p = 20;
	printf("���� number�� �� = %d\n", number);

	system("PAUSE");
}