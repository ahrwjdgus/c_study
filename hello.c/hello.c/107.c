#include <stdio.h>

int main(void)
{
	double r;
	double a;
	printf("원의 반지름을 입력: ");
	scanf_s("lf", &r);

	a = 3.141592 * r * r;
	printf("원의 면적: %f \n", a);

	return 0;
}