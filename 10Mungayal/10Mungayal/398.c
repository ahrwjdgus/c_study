#include <stdio.h>
#include <string.h>

int main()
{
	char key[] = "���";
	char buffer[80];

	do {
		printf("���� ���� �����ϴ� ������?");
		gets_s(buffer,99);
	} while (strcmp(key, buffer) != 0);

	printf("����!");
	system("PAUSE");
}