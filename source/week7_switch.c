/*
	파일명: week7_switch.c
	설  명: 조건문 switch 연습 & 연속 if 와 상관 관계 
	작성자: mju
*/

#include <stdio.h>

//switch~case 문  
void doExam1()
{
	//1. 변수 선언 - 정수 number
	int number;
	 
	//2. 변수 값 설정 = 1
	number = 5;
	
	//3. switch case 문
	switch(number)
	{
		case 0:
			printf("없음\n");
			break;
		case 1:
			printf("하나\n"); 
			break;
		case 2:
		case 3:	
			printf("두 서너개 \n");
			break;
		default:
			printf("많음\n");
			break;	
	}
}

// switch ~ case 문 - 학점프로그램 
void doExam2()
{
	//1. 변수 선언 - 정수 :,score, iscore, 문자 : grade
	int score, iscore;
	char grade; 
	//2. 변수 계산 score -> iscore로
	score = 100;
	iscore = score/10;    // 정수/정수 -> 정수 
	//3. switch ~ case문
	switch(iscore)
	{
		case 10: 
		case 9:
			grade = 'A'; //문자는  ' ' 작은 따옴표.. X " " X 
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	} 
	printf("점수 %d 는 %c 학점 입니다.\n", score, grade);
	
} 
//switch case 연습 - 달의 날짜 출력하기 
void doExam3()
{
	//1. 변수 선언 - 달, 일 month, days - 정수
	int month, days, year;
	//2. 입력메시지 & 입력 - 달을 입력하세요 .
	printf("달을 입력하시오 : ");
	scanf("%d %d", &month, &year); 
	//3. switch -case 
	switch(month)
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=31;
			break;
		default:
			days = 30;
			break;	
	}
	printf("%d월은 %d일로 되어있습니다. \n", month, days);
}

int main()
{
	doExam4();
	return 0;
}
