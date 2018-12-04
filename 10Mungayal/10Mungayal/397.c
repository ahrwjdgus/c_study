#include <stdio.h>

int main(void)
{
	char s[] = "Helloworld";
	char *p = "Helloworld";
	s[0] = 'h';

	printf("포인터가 가리키는 문자열 = %s \n", p);
	p = "Goodbye";
	printf("포인터가 가리키는 문자열 = %s \n", p);
	printf(" 문자열 = %s \n", s);

	system("PAUSE");
}