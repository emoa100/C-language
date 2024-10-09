// 프로그램 기본 구성 : 주석, 전처리기, 함수 (main함수, printf 함수, 일반 함수) + 변수, 수식
//1. 주석
/*
	제 2 강 
        파일명: hello.c
	설  명: c 프로그램 기본 구성 학습
	작성자: mju, 24-09-10
*/

//2. 전처리기
#include<stdio.h> 


//3. main함수
int main() 
{ 
	//표준출력함수 printf() - 문자열 출력 
	printf("Hello, World\n");
	
	//출력제어 \n : 한줄 띄우기 
	printf("123\n");
	printf("456789\n");
	printf("123\n4567889\n");

	//출력제어  \t : 일정 간격 띄우기 
	printf("tap키 사용 \t 일정한 간격\n");
	printf("컴퓨터를 \"사랑\" 합니다\n");
	
	//형식지정자 %d : 정수
	printf("정수 : %d", 100); 

	return 0;
}

//4. 일반함수- 입력/출력 없는 함수
void doExam()
{
	
} 

//5.  일반함수 - 변수 + 수식 
void addExam()
{
	//변수 선언 
	int x;
	int y;
	int sum;

	//수식  
	x = 100;
	y = 200;
	sum = x + y;
	
	//화면 출력 
	printf("두 수의 합: %d", sum);
} 
