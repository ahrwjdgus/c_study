#include <stdio.h>

int main(void)
{
	int money, price;

	printf("���� ������ �ִ� ��: ");
	scanf_s("%d", &money);
	printf("ĵ���� ����: ");
	scanf_s("%d", &price);

	int num = money / price;
	printf("�ִ�� �� �� �ִ� ĵ���� �� = %d \n", num);

	int change = money % price;
	printf("ĵ�� ���� �� ���� �� = %d \n", change);

	system("PAUSE");
	return 0;
}