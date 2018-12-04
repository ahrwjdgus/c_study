#include <stdio.h>

int main(void)
//{
//	float a;
//	printf("실수를 입력하시오 : ");
//	scanf_s("%f", &a);
//	printf("지수 형식으로는 %e입니다.", a);
//
//	system("PAUSE");
//	return 0;
//}
//{
//	char a;
//	printf("문자를 입력하시오 : ");
//	scanf_s("%c", &a);
//	printf("아스키 코드는 %d입니다.", a);
//	system("PAUSE");
//	return 0;
//}
{
	float a;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf_s("%f", &a);
	printf("%0.2f제곱미터는 %0.2f입니다.", a, a / 3.3058);

	system("PAUSE");
	return 0;
}