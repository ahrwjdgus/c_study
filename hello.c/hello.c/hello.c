/*2018년 9월 18일 목정현 c언어 스터디*/

#include <stdio.h>
int main(void) /*{
	int x, y, sum;
	printf("첫 번째 숫자를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("두 번째 숫자를 입력하시오 : ");
	scanf_s("%d", &y);
	sum = x + y;
	printf("%d + %d = %d", x, y, sum);

	system("PAUSE");
	return 0;
}*/
{
	int x, y,a,b ,sum;
	printf("몇 박? : ");
	scanf_s("%d", &x);
	printf("항공권 가격은? : ");
	scanf_s("%d", &y);
	printf("호텔 1박 비용은? : ");
	scanf_s("%d", &a);
	printf("하루 용돈은 : ");
	scanf_s("%d", &b);
	sum = y+(a+b)*x;
	printf("%d", sum);

	system("PAUSE");
	return 0;
}

