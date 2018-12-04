#include <stdio.h>

int main(void)
{
	int money, price;

	printf("현재 가지고 있는 돈: ");
	scanf_s("%d", &money);
	printf("캔디의 가격: ");
	scanf_s("%d", &price);

	int num = money / price;
	printf("최대로 살 수 있는 캔디의 수 = %d \n", num);

	int change = money % price;
	printf("캔디 구입 후 남은 돈 = %d \n", change);

	system("PAUSE");
	return 0;
}