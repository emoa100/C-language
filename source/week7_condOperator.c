/*
	파일명: week7_condOperator.c
	설  명: 조건문 연산자 
	작성자: mju
*/

#include <stdio.h>


//조건 연산자  - 유일한 3항 연산자 -  조건? 참:거짓 
void doExam1()
{
	//1.변수 선언 - abs_value, max_value, x, y 

	int abs_value, max_value, min_value, x, y;
	//2. x y 에 값 저장 
	x=5; 
	y=3;

	//3. 조건 연산자  
	abs_value = x>0 ? x : -x ; //절대값
	max_value = x>y ? x : y ;  //최대값
	min_value = x<y ? x : y;   //최소값
	
	int age = 65; 
	// age 60 크면 실버 .. 작으면 그린  출력
	age>60 ? printf("실버\n") : printf("그린 \n"); 
}

// 타입 변환 - (int), (float)
void doExam2()
{
	//1. 변수 선언 
	int i;
	float pi, sum;

	//2. 명시적 타입변환
	i = (int)1.23;   // 1 이 저장됨
	pi =(float)3;    // 3.0이 저장됨

	//3. 자동적인 타입변환
	i  = 1.23;   // 실수값 대신 1 이 저장됨
	pi = 3;     // 정수값 대신 3.0이 저장됨

	// 정수/실수 = 실수
	sum = (2 + 4 + 5) / (double)3;  // 3 : 명시적 타입변환
	sum = (2 + 4 + 5) / 3.0;        // (2+4+5) -> 실수 : 
}


int main()
{
	doExam1();
	return 0;
}
