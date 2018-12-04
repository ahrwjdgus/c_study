#include <stdio.h>
int main(void)
{
	int att_book[16] = { 0 };
	int i, count = 0;

	for (i = 0; i < 16; i++) {
		printf("%d번째 강의에 출석했나요?(출석은1, 결석은0):", i + 1);
		scanf_s("%d", &att_book[i]);
	}

	for (i = 0; i < 16; i++) {
		if (att_book[i] == 0)
			count++;
	}
	double ratio = count / 16.0;
	if (ratio > 0.3)
		printf("수업 일수 부족합니다(%f%%)\n", ratio*100.0);
	system("PAUSE");
}