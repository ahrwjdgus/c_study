#include <stdio.h>

int main(void)
{
	double r;
	double a;
	printf("���� �������� �Է�: ");
	scanf_s("lf", &r);

	a = 3.141592 * r * r;
	printf("���� ����: %f \n", a);

	return 0;
}