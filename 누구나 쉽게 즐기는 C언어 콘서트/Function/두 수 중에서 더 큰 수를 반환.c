#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>

double get_bigger(double x, double y);
double SaveNumber(void);

// �� �� �߿��� �� ū ���� ��ȯ�ϴ� �Լ� get_bigger()�� ������ ���� �ۼ��ϰ� �̰��� �̿��ؼ� 
// ����ڷκ��� ���� �Ǽ� �� �� �߿��� �� ū ���� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.
int main(void) {
	double x, y, result;

	x = SaveNumber();
	printf("x : %.2lf\n", x);
	y = SaveNumber();
	printf("y : %.2lf\n", y);

	result = get_bigger(x, y);
	printf("�� ū ���� : %.2lf\n", result);

	return 0;
}


// �� �� �߿��� �� ū ���� ��ȯ
double get_bigger(double x, double y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


//���� �Է¹ޱ�
double SaveNumber() {
	double number;

	printf("x���� �Է��ϼ��� :");
	scanf("%lf", &number);
	getchar();

	return number;
}