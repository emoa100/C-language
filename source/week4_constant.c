/*
    강  좌 : 제 4 강 
    파일명 : week4_constant.c
    설  명 : 기호 상수 연습
    작성자 : mju
*/

#include<stdio.h>

//기호상수 선언  - define 전처리 이용 
#define TAX_RATE 0.2

void doExam1(); // 기호 상수 연습

int main() 
{
	//1. 기호 상수 선언 - const 키워드 이용 
	const int MONTHS = 12;
	return 0;
}

// 상수 연습
void doExam1() 
{
	//1. 기호 상수 선언 - const 키워드 이용 
	const int MONTHS = 12;
	
	//2. 변수 선언 - 정수 m_salary, y_salary
	int m_salary, y_salary;
	
	//3. 입력 메시지 출력
	printf("월급을 입력하시오 : ");
	
	//4. 입력  m_salary
	scanf("%d", &m_salary);
	
	//5. 계산 - y_salary
	y_salary = m_salary * MONTHS;
	
	//6. 출력 
	printf("연봉은 %d 원, 세금은 %lf 원입니다.\n", y_salary, y_salary * TAX_RATE);
}

