#include <stdio.h>

int main(void)
{
	long long pro;
	long long saving;

	printf("�Ŵ� ���� �ݾ� �Է�: ");
	scanf_s("%d", &saving);

	pro = saving * 12 * 30;
	printf("30�� �� ��� = %d�� \n", pro);
	system("PAUSE");
	return 0;
}