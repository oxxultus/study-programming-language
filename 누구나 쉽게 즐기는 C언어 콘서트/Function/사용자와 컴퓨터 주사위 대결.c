#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> //srand(GetTickCount());
#include <time.h>	//srand(time(NULL));
#include <math.h>

int Roll_the_dice(void);
int Finding_Winner(int, int);

int main() {

	int user_dice[3] = { 0 }, computer_dice[3] = { 0 };
	int user_sum = 0, computer_sum = 0;

	//�õ尪 �ʱ�ȭ
	srand(time(NULL));

	//�Լ��� �ݺ��ؼ� �迭�� ����
	for (int i = 0; i < 3; i++) {
		user_dice[i] = Roll_the_dice();
		user_sum += user_dice[i];
	}
	for (int j = 0; j < 3; j++) {
		computer_dice[j] = Roll_the_dice();
		computer_sum += computer_dice[j];
	}

	printf("����� �ֻ��� = (%d, %d, %d) = %d\n", user_dice[0], user_dice[1], user_dice[2], user_sum);
	printf("��ǻ�� �ֻ��� = (%d, %d, %d) = %d\n", computer_dice[0], computer_dice[1], computer_dice[2], computer_sum);

	Finding_Winner(user_sum, computer_sum);

	return 0;
}
//�ֻ����� ������ �Լ�
int Roll_the_dice() {
	return (rand() % 6) + 1; //1~6�� �� �߿� �ϳ��� ��ȯ
}

//�ΰ��� ���� ���ϴ� �Լ�
int Finding_Winner(int x, int y) {
	if (x > y) {
		printf("����� �¸�\n");
		return 2;
	}
	else if (x == y) {
		printf("�����ϴ�\n");
		return 1;
	}
	else {
		printf("��ǻ�� �¸�\n");
		return 0;
	}
}