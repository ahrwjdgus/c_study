#include <stdio.h>

int main(void)
//{
//	float a;
//	printf("�Ǽ��� �Է��Ͻÿ� : ");
//	scanf_s("%f", &a);
//	printf("���� �������δ� %e�Դϴ�.", a);
//
//	system("PAUSE");
//	return 0;
//}
//{
//	char a;
//	printf("���ڸ� �Է��Ͻÿ� : ");
//	scanf_s("%c", &a);
//	printf("�ƽ�Ű �ڵ�� %d�Դϴ�.", a);
//	system("PAUSE");
//	return 0;
//}
{
	float a;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf_s("%f", &a);
	printf("%0.2f�������ʹ� %0.2f�Դϴ�.", a, a / 3.3058);

	system("PAUSE");
	return 0;
}