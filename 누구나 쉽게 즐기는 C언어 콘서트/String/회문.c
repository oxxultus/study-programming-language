#pragma warning(disable:4996)  // Ư�� ��� �޽����� ����
#include <stdio.h>             // ǥ�� �Է� �� ��� �Լ��� ����ϱ� ���� ���
#include <stdlib.h>            // ǥ�� ���̺귯�� �Լ� �� ��� (��: RAND_MAX) ���
#include <time.h>              // �ð� �� �ð� �Լ��� ����ϱ� ���� ��� (������ ����)
#include <math.h>              // ���� �Լ��� ����ϱ� ���� ��� (������ ����)
#include <string.h>  
#include <ctype.h>

#define SIZE 100

//������ �ƴ��� �Ǵ��ϴ� �Լ�
int checkPalindrome(char word[]) {
    int savePalindrome = 1; //�ϴ� ȸ���̶�� ����

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] != word[strlen(word) - 1 - i]) {
            savePalindrome = 0; //ȸ���� �ƴ϶�� 0�̶�� ����
            break;
        }
    }
    if (savePalindrome) {
        printf("%s�� ȸ���Դϴ�", word);
        return 1;
    }
    else {
        printf("%s�� ȸ���� �ƴմϴ�\n", word);
        getchar(); //���ѹݺ� ����
        return 0;
    }
}

int main(void) {

    //�Է¹��� ���ڿ��� �����ϴ� �ڵ�
    char word[SIZE] = { 0 };


    while (1) {

        printf("���ڿ��� �Է��ϼ���: ");
        //scanf()�� ������ ������ ���� ���ڸ����� �����ϱ� ������ %[^\n]s ���
        scanf("%[^\n]s", word);

        //checkPalindrome(word) == 0�̸� ȸ���� �ƴϴ�, �ݺ��� ���� 
        //checkPalindrome(word) == 1�̸� ȸ���̴�, �ݺ��� ����
        if (checkPalindrome(word)) {
            break;
        }

    }
    return 0;
}