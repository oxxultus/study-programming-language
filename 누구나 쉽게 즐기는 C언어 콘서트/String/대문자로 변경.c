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

	//�Է¹��� ���ڿ��� ����
	char text[SIZE] = { 0 };

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(text, SIZE - 1);

	//�빮�ڷ� ���� �� ���
	//���ڿ��� ���� strlen(s)��ŭ �ݺ�
	for (int i = 0; i < strlen(text); i++) {
		//�빮�ڷ� �����Ѱ��� �ٽ� ���ڿ��� ����
		text[i] = toupper(text[i]);
		printf("%c", text[i]);
	}

	//�ҹ��ڷ� ���� �� ���
	//���ڿ��� ���� strlen(s)��ŭ �ݺ�
	for (int i = 0; i < strlen(text); i++) {
		//�빮�ڷ� �����Ѱ��� �ٽ� ���ڿ��� ����
		text[i] = tolower(text[i]);
		printf("%c", text[i]);
	}

	return 0;
}


