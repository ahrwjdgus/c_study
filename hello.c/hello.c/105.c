#include <stdio.h>

int main(void)
{
	double c, f;

	printf("È­¾¾¿Âµµ= ");
	scanf_s("%lf", &f);

	c = (f - 32.0)* 5.0 / 9.0;
	printf("¼·¾¾¿Âµµ´Â %lf ÀÌºó´Ù.", c);
	system("PAUSE");
	return 0;
}