/*
	강  좌 : 제 5 강 
	파일명: week5_if.c
	설  명: 단순 if 구문, if ~ else 구문 연습 
	작성자: mju
*/

#include <stdio.h>

void doExam1(); // 단순 if 구문 연습  
void doExam2(); // if~else 구문 연습 
void doExam3(); // if~else + 조건문 연습  - 윤년 판단 프로그램  

int main() 
{
	return 0;
}

//단순 if 구문 연습 
// 정수를 입력 받아 그 값이 0 보다 크면 양수 출력 
void doExam1()
{
	//1. 변수선언 - 정수 number
	int number;
	
	//2. 안내메시지 - 입력
	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	//3. if 구문 - 만약에 0보다 크면 출력 
	 //버전1 - 권고 버전 - 중괄호 이용
	if(number>0)
	{
		printf("양수입니다.\n");
	}
	
	//버전2 - 일반 버전 -  중괄호 없는 버전 - if는 한문장만 제어함
	if(number>0)
		printf("양수입니다.\n");
		
        //버전3 - 비권고버전 - 가독성이 떨어지고, 에러 수정이 어려움  
        if (number > 0)
        printf("%d는 양수입니다. - 만입이 없는 버전\n", number);
	 
	printf("입력된 값은 %d 입니다 \n", number);		
}

//if~else 구문 연습
// 정수를 입력받아 2로 나누어 나머지가 0이면 짝수 그렇지 않으면 홀수 
void doExam2()
{
	//1. 변수 선언 - 정수 number
	int number;
	
	//2. 안내메시지 & 입력
	printf("정수를 입력하시오 : ");
	scanf("%d", &number); 
	
	//3. if 구문- 2로 나누어 나머지%가 0 ~ else 구문
	if( number%2 == 0 )  //number를 2로 나눈 나머지가 0 인지
	{
		printf("%d 는 짝수 입니다.\n", number);
	}
	else
	{
		printf("%d 는 홀수 입니다.\n", number);	
	} 
	
	//일반 버전 - 중괄호 없는 버전  
	if( number%2 == 0 )  //number를 2로 나눈 나머지가 0 인지
		printf("%d 는 짝수 입니다.\n", number);
	else
		printf("%d 는 홀수 입니다.\n", number);	
		
	//if에 제어 받는 문장이 2개 이상일 경우는 중괄호가 필수 
	if( number%2 == 0 )  //number를 2로 나눈 나머지가 0 인지
	{
		printf("%d 는 짝수 입니다.\n", number);
		printf("if 제어 받는 문장이 2개 일때 중괄호는 필수");
	}
	else
	{
		printf("%d 는 홀수 입니다.\n", number);	
	}  	
}

//if~else 구문 연습 - 윤년 판단 프로그램 
// 정수를 입력받아, 다음 2조건중 하나만 만족하면 윤년 입니다. - 1||2
// 1. 4로 나누어 나머지가 0  &&  100으로 나누어서 나머지가 0이 아닌 경우
//2. 400으로 나누어서 나머지가 0 인경우 
void doExam3()
{
	//1. 변수 선언 - 정수 year
	int year;
	
	//2. 안내메시지 & 입력
	printf("년도를 입력하시오 : ");
	scanf("%d", &year);
	
	//3. if구문 - 윤년 조건 1(1-1&&1-2) || 2
	//1-1 year%4 == 0   ,  1-2 year%100 != 0   
	//2  year%400  == 0
	if((year%4==0 && year%100!=0 ) || (year%400==0)) 
	{
		printf("%d 년은 윤년 입니다 \n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다. \n", year);
	}
}
