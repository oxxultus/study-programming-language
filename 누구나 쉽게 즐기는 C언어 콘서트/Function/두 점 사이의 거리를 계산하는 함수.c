#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>

//�Լ� ����
double dist_2d(double, double, double, double);


//7. �� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��Ͽ� ����. 2���� �������� 
// �� �� (x��, y��)�� (x��, y��) ������ �Ÿ��� ����ϴ� dist_2d()�� �ۼ��Ͻÿ�. 
// ������ ���� �� �� ������ �Ÿ��� ����ϴ� ������ ����϶�.
int main(void) {
	double x1, x2, y1, y2, result;

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(�Է� ���� :x y)\n_ _\b\b\b");
	scanf("%lf %lf", &x1, &y1);

	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(�Է� ���� :x y)\n_ _\b\b\b");
	scanf("%lf %lf", &x2, &y2);

	//result ���� dist_2d(x1, y1, x2, y2)��ȯ�� ����
	result = dist_2d(x1, y1, x2, y2);
	printf("���� ������ �Ÿ��� %lf�Դϴ�.", result);

	return 0;
}

//(x��, y��)�� (x��, y��) ������ �Ÿ��� ����ϴ� dist_2d()�Լ�
double dist_2d(double x1, double y1, double x2, double y2) {
	double result = 0.0;

	//sqrt�� ��Ʈ �̴�.
	result = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

	//result ��ȯ
	return result;
}