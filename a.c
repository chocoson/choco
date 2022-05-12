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

int whichdog () {
    int dog;
    printf("어떤 강아지인가요?");
    doglist();

    return dog;
} // 강아지 선택 함수

void writeDiary () {
    
} // 강아지 일지 작성함수

int askNum () {
    int num=0; // 번호 받을 변수명
    printf("원하시는 기능을 선택하세요!");
    printf("1. 반려동물 산책일지 작성\n2. 반려동물 사료 급여일지 작성\n3. 반려동물 정기검진 결과 작성\n4. 반려동물 성장일지 작성\n5. 작성된 일지 확인\n번호 입력 : ");
    scanf("%d",&num);
    return num;
}

// 


int main () {




    return 0;
}
