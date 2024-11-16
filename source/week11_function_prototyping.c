/*
   파일명: week11_function_prototyping.c 
   설  명: 함수 원형 연습 
   이  름: mju 
*/

//전처리기
#include <stdio.h>

//함수원형 == 함수선언(function declaration) 

int max(int x, int y);
void doExam1() ;
double get_area(int radius); 
void doExam2();
void print_char(char ch);
void doExam3();
void happyBirthday();

//예제1) 두 수 입력 받아 그 중  큰수를 리턴 하는 함수   
//함수 정의 - max - 매개변수 정수 2개:x, y, 리턴 정수
//리턴형 함수이름(매개변수1, 매개변수2)
int max(int x, int y ) 
{ 
     //문장들
	 return 0;   
}

//함수 호출 
void doExam1()
{
	//문장들  
	value = max(10, 20); // 인수(실제값2개 - 정수) 
}
 


//예제2) 반지름을 입력받아 원넓이를 구하는 함수  
//함수 정의 - get_area - 매개변수 정수 1개 :radius, 리턴 실수(double, float)  
//리턴자료형 함수이름(매개변수1)
double get_area(int radius) 
{
	//문장들 
	return 0.1;
 } 
   
//함수 호출 
void doExam2()
{
	//문장들  
	area = get_area(10);     // 인수(실제값1개 - 정수) 
}
 

//예제3) 매개변수로  문자를 입력 받아 화면에 출력 
//함수 정의 - print_char - 매개변수는 문자 ch, 리턴 없음 
//리턴자료형 함수이름(매개변수)
void print_char(char ch)
{ 
	 printf("문자 - %c \n", ch);
}

//함수 호출 
void doExam3()
{
	//문장들  
    print_char('a');  // 인수(실제값-문자1개 )  
} 


//예제4) "생일 축하합니다" 화면에 출력
//함수 정의 - happyBirthday - 매개변수 없고, 리턴 없음 
// 리턴자료형 함수이름() - 리턴이 없을때는 void 
void happyBirthday()
{
	//1. "Happy Birthday" 출력 
	printf("Happy Birthday \n");
}
	
// 함수 호출 
void doExam4()
{
	// 1. 함수 호출 
	happyBirthday();  // 인수 (없음) 
}
