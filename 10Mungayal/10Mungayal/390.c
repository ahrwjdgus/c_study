#include <stdio.h>
#include <string.h>

//int main(void)
//{
//	char s[] = "abcdefgh";
//	int len = strlen(s);
//	printf("���ڿ� %s�� ���� = %d", s, len);
//	system("PAUSE");
//}

int main(void)
{
	char s[11] = "hello";
	strcat(s, "WORLD  \n");
	printf("%s", s);
	system("PAUSE"); //??
}