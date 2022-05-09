#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

typedef struct _Info {   // 구조체 정의
    char name[20];        // 강아지 이름
    int age;              // 강아지 나이
    int weight;    // 강아지 몸무게
    int birth; // 강아지 생일
    int walktime; // 산책시간 
    char foodcheck; // 다 먹었는지 여부 (Y,N)
    char med[100]; // 정기검진 결과
    char diary[200]; // 성장일기 
} info;

void visual () { 
    printf("========================================");
} // 기본 인터페이스 틀 함수

// 강아지 선택 함수
// 

int main () {




    return 0;
}
