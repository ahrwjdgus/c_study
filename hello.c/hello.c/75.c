#include <stdio.h>

int main(void)
//{
//	printf("이름 : 목정현\n주소 : 인천시 \n 전화번호 : 010-1111-1111\n");
//	system("PAUSE");
//	return 0;
//}

//{
//	int price = 22000;
//	printf("제품의 가격은 %d 입니다.\n", price);
//	system("PAUSE");
//	return 0;
//}
{
	int x, y,z ,sum;
	printf("첫 번째 숫자를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("두 번째 숫자를 입력하시오 : ");
	scanf_s("%d", &y);
	printf("첫 번째 숫자를 입력하시오 : ");
	scanf_s("%d", &z);
	sum = (x + y + z )/ 3;
	printf("%d", sum);

	system("PAUSE");
	return 0;
}