#include <stdio.h>
#include <math.h>

int main(void)
{
	float x1, x2, y1, y2;
	double r;
	printf("첫번째 점(x1,x2): ");
	scanf_s("%f %f", &x1, &y1);
	printf("두번째 점(y1,y2): ");
	scanf_s("%f%f", &x2, &y2);
	printf("Distance = %f", sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
	system("PAUSE");
	return 0;
}