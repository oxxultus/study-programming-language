#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>

//����
double quad_eqn(double, double, double);
double Save_Number();


//2�� �������� ���� ����ϴ� �Լ� quad_eqn()�� �ۼ��϶�. 
//quad_eqn()�Լ��� a, b, c�� ��Ÿ���� double���� 3���� �μ��� �޴´�. 
//�Ǻ����� ����� ��쿡�� ���� ����϶�. ���� �Ǻ����� ���� �����̸� ���� ���ٴ� �޽����� ����϶�.


int main(void) {

	double a = 0.0, b = 0.0, c = 0.0;

	printf("2�� �������� ����� �Է��Ͻÿ�:\n");

	a = Save_Number();
	b = Save_Number();
	c = Save_Number();

	quad_eqn(a, b, c);

	return 0;
}
//��� ���� �Է¹޴� �Լ�
double Save_Number() {
	double n;
	static int i = 0;

	if (i == 0) {
		printf("a: ");
		scanf("%lf", &n);
		i++;

		return n;
	}
	else if (i == 1) {
		printf("b: ");
		scanf("%lf", &n);
		i++;

		return n;
	}
	else if (i == 2) {
		printf("c: ");
		scanf("%lf", &n);
		i = 0;

		return n;
	}
}

//2�� �������� ���� ����ϴ� �Լ� quad_eqn()�Լ�
double quad_eqn(double a, double b, double c) {
	double result = 0.0;
	double D;
	double first_value = 0.0, second_value = 0.0;


	//�Ǻ���
	D = b * b - (4 * a * c);

	//���� �ٸ� �� �Ǳ�
	if (D > 0) {
		first_value = (-b + sqrt(D)) / (2.0 * a);
		second_value = (-b - sqrt(D)) / (2.0 * a);
		printf("D>0 �̹Ƿ� ������������ ���� 2���̴�\n");
		printf("ù ��° �� %.6lf\n", first_value);
		printf("�� ��° �� %.6lf\n", second_value);
		return first_value;
	}
	//�߱�
	else if (D == 0) {
		first_value = (-b + sqrt(D)) / (2.0 * a);
		printf("D=0 �̹Ƿ� ������������ ���� 1���̴�\n");
		printf("ù ��° �� %.6lf\n", first_value);
		return first_value;
	}
	//���
	else if (D < 0) {
		printf("�������� ���� �����ϴ�.\n");
		return 0;
	}
}
//