#include <stdio.h>

int main(void)
{
	char str1[] = "Seoul";
	char str2[] = { 'i','s','\0' };
	char str3[] = "the capital city of korea.";

	printf("%s %s %s \n", str1, str2, str3);
	system("PAUSE");
}