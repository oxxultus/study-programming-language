#define _CRT_SECURE_NO_WARNINGS // Microsoft Visual Studio와 관련된 경고를 억제
#pragma warning(disable:4996)   // 특정 경고 메시지를 억제
#include <stdio.h>              // 표준 입력 및 출력 함수를 사용하기 위한 헤더
#include <stdlib.h>              // 표준 라이브러리 함수 및 상수
#include <math.h>              // 수학 함수를 사용하기 위한 헤더 (사용되지 않음)
#include <string.h>  
#define SIZE 100
#define ASCII 128

int main(void) {

    //입력받은 문자열을 저장하는 코드
    char saveText[SIZE] = { 0 };

    //아스키 코드의 범위만큼 범위지정 0~127
    int freq[ASCII] = { 0 };


    printf("텍스트를 입력하시오: ");
    //"%[^n]s"를 이용해 줄바꿈을 하기 전까지 모든 문자를 입력받늗다
    scanf("%[^\n]s", saveText);

    //입력받은 문자열의 크기만큼 반복 : strlen(saveText) 함수는 해당 문자열의 길이를 반환합니다.
    //freq[saveText[i]]++; : 입력된 문자열에서 문자 'saveText[i]'의 빈도수를 증가시킵니다.즉, 
    //해당 문자가 나타날 때마다 freq 배열에서 해당 문자의 ASCII 코드 위치에 있는 요소를 1씩 증가시킵니다.
    for (int i = 0; i < strlen(saveText); i++) {
        //예:saveText[i] = 'k' 라고 가정하면 freq[K]++; -> freq[107]++ 
        freq[saveText[i]]++;
    }
    //if (freq[j] != 0): 문자열에 해당 문자가 하나 이상 나타났다면 아래의 코드를 실행
    for (int j = 'a'; j <= 'z'; j++) {
        if (freq[j] != 0)
            printf("%c 문자가 %d번 등장하였음!\n", j, freq[j]);
    }
    //if (freq[k] != 0): 문자열에 해당 문자가 하나 이상 나타났다면 아래의 코드를 실행
    for (int k = 'A'; k <= 'Z'; k++) {
        if (freq[k] != 0)
            printf("%c 문자가 %d번 등장하였음!\n", k, freq[k]);
    }

    return 0;
}