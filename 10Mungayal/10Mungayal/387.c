#include <stdio.h>

//int main(void)
//{
//	char name[100];
//	char address[100];
//
//	printf("�̸��� ��� �ǽó���?");
//	scanf_s("%s", name);
//	
//	printf("����??");
//	scanf_s("%s", address);
//
//	printf("�ȳ�, %s�� ��� %s�� \n", address, name);
//	system("PAUSE");
//}
int main(void)
{
	char name[100];
	char address[100];

	printf("�̸��� ��� �ǽó���?");
	gets_s(name, 99);

	printf("����??");
	gets_s(address, 99);

	printf("�ȳ�, %s�� ��� %s�� \n", address, name);
	system("PAUSE");
}