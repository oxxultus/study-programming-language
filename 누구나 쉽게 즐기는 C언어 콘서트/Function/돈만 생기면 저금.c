#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>		// RAND_MAX
#include <conio.h>
#include <Windows.h>	//srand(GetTickCount());
#include <time.h>		//srand(time(NULL));
#include <math.h>

//����
long draw(long);
void save(void);

//���� ����
long money = 0;

int main(void) {
	//��������
	long amount = 0;

	while (1) {
		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1):");
		scanf("%ld", &amount);

		// -1�Է½� ����
		if (money == -1) {
			break;
		}
		else {
			save(draw(amount));
		}
	}

	return 0;
}
//���� �����ϴ� �Լ�
long draw(long amount) {
	return money += amount;
}

//���ݱ����� ����� ���
void save(void) {
	printf("���ݱ����� ������� %ld\n", money);
}
