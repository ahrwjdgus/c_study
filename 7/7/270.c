#include <stdio.h>
int main(void)
{
	int att_book[16] = { 0 };
	int i, count = 0;

	for (i = 0; i < 16; i++) {
		printf("%d��° ���ǿ� �⼮�߳���?(�⼮��1, �Ἦ��0):", i + 1);
		scanf_s("%d", &att_book[i]);
	}

	for (i = 0; i < 16; i++) {
		if (att_book[i] == 0)
			count++;
	}
	double ratio = count / 16.0;
	if (ratio > 0.3)
		printf("���� �ϼ� �����մϴ�(%f%%)\n", ratio*100.0);
	system("PAUSE");
}