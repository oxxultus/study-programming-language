#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <conio.h>
#include <Windows.h> // GetTickCount()
#include <time.h>
#include <math.h>


void draw_star(void);

//������ ���� ȭ�鿡 *****************
//�� ����ϴ� �Լ��� �ۼ��ϰ� �̰��� ȣ���Ͽ��� ������ ���� ����� ����� ����.
int main(void) {

	draw_star();
	printf("hello world!\n");
	draw_star();

	return 0;
}


// ***************** �� ����ϴ� ���α׷�
void draw_star(void) {

	printf("*****************\n");

	return;
}