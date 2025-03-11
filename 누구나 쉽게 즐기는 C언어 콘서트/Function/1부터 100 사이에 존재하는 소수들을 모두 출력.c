#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>

int check_prime(int);


//������ ������ �Ҽ�(prime number)������ �˻��ϴ� �Լ� check_prime()�� ����Ͽ� 
//1���� 100 ���̿� �����ϴ� �Ҽ����� ��� ����ϴ� ���α׷��� �ۼ��Ѵ�.
int main(void) {

	int i;

	for (i = 1; i <= 100; i++) {
		if (check_prime(i) == 1) {
			printf("%d | ", i);
		}
	}

	return 0;
}

//������ �Ҽ��� ã�Ƴ��� �Լ�
int check_prime(int x) {
	int i;
	if (x == 1) {
		return 1;
	}
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0; //�Ҽ��� �ƴϴ�
		}
	}
	return 1; // �Ҽ��̴�
}