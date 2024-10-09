/*
    강  좌 : 제 4 강 
    파일명 : week4_operator.c
    설  명 : 산술연산자, 증감연산자, 복합대입 연산자  연습
    작성자 : mju
*/

#include<stdio.h>

void doExam1(); // 산술 연산 연습 
void doExam2(); // 몫과 나머지 연습 
void doExam3(); // 증감연산자 연습 
void doExam4(); // 복합대입연산자 연습 

int main() 
{
	return 0;
}

//산술 연산(+,-,*,/) 연습 -  실수 이용 
void doExam1() 
{
	//1. 변수 선언 - double x, y, result
	double x, y, result;
	
	//2. 입력 안내메시지 출력
	printf("두 개의 실수를 입력하시오 : ");
	
	//3. 입력 - x, y
	scanf("%lf %lf", &x, &y);
	
	//4. + 연산자 수행 후 result에 할당
	result = x + y;
	//5. result 출력
	printf("%lf + %lf = %lf\n",x, y, result);

	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);
}

//몫(/), 나머지(%) 연습
// 초를 입력받아 분/초로 나누는 것
void doExam2() 
{
	//1. 기호상수 선언 60 SEC_PER_MINUTE
	const int SEC_PER_MINUTE = 60;

	//2. 변수 선언 - 정수 분(minute), 초(second), totalSec(전체총합)
	int minute, second, totalSec;

	//3. 입력 안내메시지 출력
	printf("초를 입력하시오 : ");

	//4. 입력
	scanf("%d", &totalSec);

	//5. 계산 - 분, 초 계산
	minute = totalSec / SEC_PER_MINUTE; //몫
	second = totalSec % SEC_PER_MINUTE; //나머지
	
	//6. 출력 - 분, 초
	printf("%d초는 %d분 %d초입니다\n", totalSec, minute, second);
}

// 증감연산자(++, --) 연습  
void doExam3()
{
    //1. 변수 선언
    int x;
    
    x = 10;
    //2. 후위증감연산자 연습 
    y = x++; //x값을 y에 대입한 후 x를 증가
    printf("x=%d, y=%d\n", x, y);

    x = 10;    
    //3. 전위 증감 연산자 연습 
    y = ++x; //x값을 증가시킨 후 y에 대입
    printf("x=%d, y=%d\n", x, y);
} 

// 복합대입연산자(+=, -=, *=등 ) 연습  
void doExam4()
{
    //1. 변수 선언
    int x;
	 
    x = 10;

    //2. 복합대입연산자 연습  
    x += 3; //x = x + 3
    x *= 3; //x = x * 3
    x /= 3; //x = x / 3
    x %= 3; //x = x % 3
    x -= 3; //x = x - 3	 
}
