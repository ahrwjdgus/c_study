#include <stdio.h>
int main()
{
	short s_money = 32767;

	s_money = s_money + 1;
	printf("s_money = %d\n", s_money);

	system("PAUSE");
	return 0;
}