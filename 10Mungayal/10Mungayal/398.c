#include <stdio.h>
#include <string.h>

int main()
{
	char key[] = "사과";
	char buffer[80];

	do {
		printf("내가 제일 좋아하는 과일은?");
		gets_s(buffer,99);
	} while (strcmp(key, buffer) != 0);

	printf("맞음!");
	system("PAUSE");
}