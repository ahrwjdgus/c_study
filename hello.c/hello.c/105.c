#include <stdio.h>

int main(void)
{
	double c, f;

	printf("ȭ���µ�= ");
	scanf_s("%lf", &f);

	c = (f - 32.0)* 5.0 / 9.0;
	printf("�����µ��� %lf �̺��.", c);
	system("PAUSE");
	return 0;
}