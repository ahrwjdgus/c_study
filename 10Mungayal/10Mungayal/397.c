#include <stdio.h>

int main(void)
{
	char s[] = "Helloworld";
	char *p = "Helloworld";
	s[0] = 'h';

	printf("�����Ͱ� ����Ű�� ���ڿ� = %s \n", p);
	p = "Goodbye";
	printf("�����Ͱ� ����Ű�� ���ڿ� = %s \n", p);
	printf(" ���ڿ� = %s \n", s);

	system("PAUSE");
}