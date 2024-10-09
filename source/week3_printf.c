/*
	강  좌 : 제 3 강 
	파일명: week3_printf.c
	설  명: 표준 출력 함수 printf() 연습 
	작성자: mju
*/

#include <stdio.h>

void doExam1(); // 형식지정자  
void doExam2(); // 필드폭과 정밀도 
void doExam3(); // 연습프로그램 

int main()
{
	return 0;
}

// ## 출력함수 - 형식지정자 연습 ##
void doExam1()
{
	//1. 변수 선언
	int sum = 10;
	int number = 10;
	double grade = 4.5;
	
	//2. 출력 함수 이용 - 형식지정자  %d (정수), %f(실수) 
	printf("두수의 합 : %d \n", sum);
	printf("%d %f\n", number, grade);
	
}

//필드폭과 정밀도 연습
void doExam2()
{
	//필드폭 : %와 d 사이에 숫자 넣기  
	printf("%d\n", 123);
	printf("%10d\n", 123);  // 10칸, 오른쪽 정렬 
	printf("%-10d\n", 123); // 10칸, 왼쪽 정렬
	
	//정밀도 
	printf("%f\n", 1.23456789);      // 기본 
	printf("%10.3f\n", 1.23456789);  // 필드폭 10, 정밀도를 3으로 
	printf("%-10.3f\n", 1.23456789); // 동일, 왼쪽 정렬 
	printf("%.3f\n", 1.23456789);    // 정밀도만 3으 
	
}

//표준출력함수 연습
void doExam3()
{
	//1.변수 선언 
	int x;
	int y;
	int sum, diff, mul, div; 
	
	//2. 변수의 값 저장- 값
	x = 20;
	y = 10;
	
	//3. 변수의 값 저장 - 수식
	sum  = x + y; 
	diff = x - y;
	mul  = x * y;
	div  = x / y;
	
	//4. 변수의 값 출력 - 정수 : %d 
	printf("두수의 합 : %d\n", sum);
	printf("두수의 차 : %d\n", diff);
	printf("두수의 곱 : %d\n", mul);
	printf("두수의 몫 : %d\n", div);
	
	printf("두수의 합 = %d, 차 = %d, 곱 = %d, 몫 = %d\n", sum, diff, mul, div);
} 

 
