/*2018�� 9�� 18�� ������ c��� ���͵�*/

#include <stdio.h>
int main(void) /*{
	int x, y, sum;
	printf("ù ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &y);
	sum = x + y;
	printf("%d + %d = %d", x, y, sum);

	system("PAUSE");
	return 0;
}*/
{
	int x, y,a,b ,sum;
	printf("�� ��? : ");
	scanf_s("%d", &x);
	printf("�װ��� ������? : ");
	scanf_s("%d", &y);
	printf("ȣ�� 1�� �����? : ");
	scanf_s("%d", &a);
	printf("�Ϸ� �뵷�� : ");
	scanf_s("%d", &b);
	sum = y+(a+b)*x;
	printf("%d", sum);

	system("PAUSE");
	return 0;
}

