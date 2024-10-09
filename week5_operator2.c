/*
	강  좌 : 제 5 강 
    파일명 : week5_operator.c
    설  명 : 관계연산자, 논리 연산자 연습  
    작성자 : mju 
*/

#include<stdio.h>

void doExam1(); // 관계 연산자 연습  
void doExam2(); // 논리 연산자 연습

int main() 
{
	return 0;
}

// 관계 연산자 연습
void doExam1() 
{
    //1. 변수 선언
    int x, y;
    x = 10;
    y = 11;

    //2. 관계연산자 연습 
    //참이면 1 출력, 거짓이면 0 출력  
    printf("x==y = %d\n", x == y); // 10과 11은 같은지?  false -  0
    printf("x!=y = %d\n", x != y); // 10과 11은 같지않은지?  true - 1
    printf("x>=y = %d\n", x >= y); // 10이 11보다  크거나 같은지 ?  false -  0
    printf("x<=y = %d\n", x <= y); // 10이 11보다 작거나 같은지 ?  true - 1
    printf("x>y = %d\n", x > y);   // 10이 11보다 큰지 ?  false -  0
    printf("x<y = %d\n", x < y);   // 10이 11보다  작은지 ? true - 1

}

// 논리 연산자 연습  
void doExam2() {
    //1. 변수 선언
    int x, y;
    x = 10;
    y = -11;

    //2. 논리 연산자 연습 
    //참이면 1 출력, 거짓이면 0 출력  - 연산 수행시 0 이면 거짓, 0이 아니면 참   
    printf("and - x&&y = %d\n", x && y); // 10(참) && -11(참) ?  true -  1
    printf("or - x||y = %d\n", x || y);  // 10(참) || -11(참) ?  true -  1
    printf("not - !x = %d\n", !x);       // ! 10(참) ?  false -  0

	//3. 논리 연산자 응용  
    printf("x가 1이 아니고 x가 2가 아니다 = %d\n", x != 1 && x != 2);   // x가 1이다 x==1 , 1이 아니다 x!=1 
    printf("x가 1이 아니거나 x가 2가 아니다 = %d\n", x != 1 || x != 2);  
}

