#include <stdio.h>

int main(void)
{
	char str[] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)
		i++;
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.", str, i);

	system("PAUSE");
}