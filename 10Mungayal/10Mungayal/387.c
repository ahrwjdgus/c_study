#include <stdio.h>

//int main(void)
//{
//	char name[100];
//	char address[100];
//
//	printf("이름이 어떻게 되시나요?");
//	scanf_s("%s", name);
//	
//	printf("어디삼??");
//	scanf_s("%s", address);
//
//	printf("안녕, %s에 사는 %s씨 \n", address, name);
//	system("PAUSE");
//}
int main(void)
{
	char name[100];
	char address[100];

	printf("이름이 어떻게 되시나요?");
	gets_s(name, 99);

	printf("어디삼??");
	gets_s(address, 99);

	printf("안녕, %s에 사는 %s씨 \n", address, name);
	system("PAUSE");
}