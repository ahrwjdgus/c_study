/*2018�� 11�� 06�� ������ c��� ���͵�*/
#include <stdio.h>
void Swap3(int*num1, int*num2, int*num3)
{
	int temp;
	temp = *num3;
	*num2 = *num1;
	*num3 = *num2;
	*num1 = temp;
}

int main(void)
{
	int a=1, b=2, c=3;
	printf("%d %d %d", a, b, c);
	Swap3(&a, &b, &c);
	printf("%d %d %d", a, b, c);
}
