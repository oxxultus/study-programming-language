#define _CRT_SECURE_NO_WARNINGS		// Microsoft Visual Studio�� ���õ� ��� ����
#pragma warning(disable:4996)		// Ư�� ��� �޽����� ����
#include <stdio.h>					// ǥ�� �Է� �� ��� �Լ��� ����ϱ� ���� ���
#include <stdlib.h>					// ǥ�� ���̺귯�� �Լ� �� ��� (��: RAND_MAX) ���
#include <conio.h>					// �ܼ� ����� �Լ��� ����ϱ� ���� ��� (������ ����)
#include <Windows.h>				// �������� API �Լ��� ����ϱ� ���� ��� (������ ����)
#include <time.h>					// �ð� �� �ð� �Լ��� ����ϱ� ���� ��� (������ ����)
#include <math.h>					// ���� �Լ��� ����ϱ� ���� ��� (������ ����)
#include <string.h>  
#include <ctype.h>						  
#define SIZE 100

int main(void) {
	char s[SIZE] = { 0 };
	int count = 0;
	int tmp;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(s, SIZE - 1);

	printf("�Է¹��� �ؽ�Ʈ: %s\n", s);

	//���ڿ� ũ�� strlen(s)��ŭ �ݺ��ؼ� ������ ����
	while (count < strlen(s)) {
		//strlen(s)���� ���ڿ��� �˻��ؼ�
		for (int i = 0; i < strlen(s); i++) {
			//������ ������ �� ���ڶ� �ڸ��� ��ȯ�Ѵ�
			if (s[i] == ' ') {
				tmp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = tmp;
			}
		}
		count++;
	}
	s[count] = '\0';
	printf("������ ���ŵ� �ؽ�Ʈ: %s", s);

	return 0;
}




