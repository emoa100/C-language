/* 
	파일명 : pointerExam13.c
	설  명 : 변수의 주소값, 포인터 변수 선언, 포인터 변수의 값 저장 
	작성자 : mju
*/

// 전처리기
#include <stdio.h>
// main 함수

int main()
{
	return 0; 
}


//예제 1. 변수와 주소
void doExam1()
{
	//1. 변수선언 & 초기화 , 정수 i(10), 문자 c(69), 실수 f(12.3)
	int i = 10;
	char c = 'E';
	float f = 12.3;
	
	//2. 출력 - 변수 값과 주소연산자 &
	//2.1 정수 변수 i 
	printf("%d - 주소 %p \n", i, &i);
	//2.2 문자 변수 c 
	printf("%c - 주소 %p \n", c, &c);
	//2.3 실수 변수 f 
	printf("%f - 주소 %p \n", f, &f);
} 

//예제 2. 포인터 변수 선언
void doExam2()
{
	//1. 정수 포인터 변수 p 선언
	int * p;
	//2. 문자 포인터 변수 pc 선언
	char *pc;
	//3. 실수 포인터 변수 pf 선언
	float *pf;
}

//예제 3. 포인터 변수와 기존 변수 연결
void doExam3()
{
	//1. 변수선언 & 초기화 , 정수 i(10), 문자 c(69), 실수 f(12.3)
	int i = 10;
	char c = 69;
	float f = 12.3;

	//2. 포인터 변수 선언과 초기화 동시에
	//2.1 정수 포인터 변수 p 선언 & 초기화 - 정수 변수 i (주소)와 연결 
	int *p = &i;
	//2.2 문자 포인터 변수 pc 선언 & 초기화 -  문자 변수 c (주소)와 연결  
	char *pc = &c;
	//2.3 실수 포인터 변수 pf 선언 & 초기화 - 실수 변수 f (주소)와 연결
	char *pf = &f;
}

