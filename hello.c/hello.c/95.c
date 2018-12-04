#include <stdio.h>

int main(void)
{
	long long pro;
	long long saving;

	printf("매달 저축 금액 입력: ");
	scanf_s("%d", &saving);

	pro = saving * 12 * 30;
	printf("30년 후 재산 = %d원 \n", pro);
	system("PAUSE");
	return 0;
}