#include <stdio.h>

int main(void)
//{
//	printf("�̸� : ������\n�ּ� : ��õ�� \n ��ȭ��ȣ : 010-1111-1111\n");
//	system("PAUSE");
//	return 0;
//}

//{
//	int price = 22000;
//	printf("��ǰ�� ������ %d �Դϴ�.\n", price);
//	system("PAUSE");
//	return 0;
//}
{
	int x, y,z ,sum;
	printf("ù ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &y);
	printf("ù ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &z);
	sum = (x + y + z )/ 3;
	printf("%d", sum);

	system("PAUSE");
	return 0;
}