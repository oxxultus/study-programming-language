#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>		// RAND_MAX
#include <conio.h>
#include <Windows.h>	//srand(GetTickCount());
#include <time.h>		//srand(time(NULL));
#include <math.h>

//����
double Calculator(double, char, double);


int main(void) {
	double x = 0.0, y = 0.0;
	char a;
	while (1) {
		printf("������ �Է��Ͻÿ�(����� Ctrl-Z):");
		scanf("%lf %c %lf", &x, &a, &y);

		// Ctrl-Z �ݺ� ����
		if (x == EOF || a == NULL || y == EOF) {
			break;
		}
		Calculator(x, a, y);
	}

	return 0;
}

double Calculator(double x, char a, double y) {
	double result;
	//���� ���� ����
	static int plus_count = 0, minus_count = 0, multiple_count = 0, division_count = 0;

	if (a == '+') {
		result = x + y;
		plus_count++;
		printf("������ �� %d�� ȣ��Ǿ����ϴ�\n", plus_count);
		printf("������ : %.2lf\n", result);
		return result;
	}
	else if (a == '-') {
		result = x - y;
		minus_count++;
		printf("������ �� %d�� ȣ��Ǿ����ϴ�\n", minus_count);
		printf("������ : %.2lf\n", result);
		return result;
	}
	else if (a == '*') {
		result = x * y;
		multiple_count++;
		printf("������ �� %d�� ȣ��Ǿ����ϴ�\n", multiple_count);
		printf("������ : %.2lf\n", result);
		return result;
	}
	else if (a == '/') {
		result = x / y;
		division_count++;
		printf("�������� �� %d�� ȣ��Ǿ����ϴ�\n", division_count);
		printf("������ : %.2lf\n", result);
		return result;
	}
}