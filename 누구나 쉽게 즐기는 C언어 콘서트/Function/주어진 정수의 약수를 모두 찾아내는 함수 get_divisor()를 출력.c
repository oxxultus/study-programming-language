#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>

int save_integer(void);
int get_divisor(int x);

//�־��� ������ ����� ��� ã�Ƴ��� �Լ� get_divisor()�� 
//�ۼ��Ͽ� ����.���� 8�� �־����� 1, 2, 4, 8�� ȭ�鿡 ����Ͽ��� �Ѵ�.
//�� �Լ��� �׽�Ʈ�ϱ� ���� main()�� �ۼ��϶�.
int main(void) {

	get_divisor(save_integer());

	return 0;
}


//������ ����� ã�Ƴ��� �Լ�
int get_divisor(int x) {
	int i;
	printf("%d�� ���: ", x);
	for (i = 1; i <= x; i++) {
		if (x % i == 0) {
			printf("%d|", i);
		}
	}
	return x;
}
//������ �Է¹޴� �Լ�
int save_integer(void) {
	int number;

	printf("����� �Է����ּ��� :____\b\b\b\b");
	scanf("%d", &number);

	return number;
}