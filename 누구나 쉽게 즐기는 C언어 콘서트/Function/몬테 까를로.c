#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>

int Monte_Carlo();


int main() {

	int choice;

	while (1) {
		printf("��(0) �Ǵ� ��(1)�� �����Ͻÿ�(����� -1): ");
		scanf("%d", &choice);

		if (choice < 0) {
			printf("������ �����մϴ�.");
			break;
		}
		//���� ������ ��ǻ�Ͱ� �¸�
		else if (choice == Monte_Carlo()) {
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		}
		//���� �ٸ��� ������� �¸�
		else if (choice != Monte_Carlo()) {
			printf("����� �̰���ϴ�.\n");
		}
		//�ٸ� ���� �Է����� ��
		else {
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}

	return 0;
}
// 0��1�߿� ������ ���� ��ȯ�ϴ� �Լ�
int Monte_Carlo() {

	srand(time(NULL));

	return rand() % 2;
}