/*
   파일명: week11_function_return.c 
   설  명: 반환값&(반환) 결과 대입 변수 집증 연습 
   이  름: mju 
*/

#include <stdio.h>


//예제 1) 반환자료형이 정수-int인 경우 
// 두 수 입력 받아 그 중  큰수를 리턴 하는 함수   
//함수 정의 - max - 매개변수 정수 2개:x, y, 리턴 정수
//리턴값: int result 
int max(int x, int y ) 
{ 
	int result;
	//문장들 
	return result;
}
//결과 대입 변수 : int value 
void doExam1()
{
	int value;
	value = max(10, 20);
}


//예제 2) 반환자료형이 실수-double인 경우
//반지름을 입력받아 원넓이를 구하는 함수  
//함수 정의 - get_area - 매개변수 정수 1개 :radius, 리턴 실수(double, float) 
//리턴값: double result 
double get_area(int radius) 
{
	double result;
	//문장들
	return result;
} 
//결과 대입 변수 : double value 
void doExam2() 
{
	int value;
	value = get_area(10);
}

//예제 3) 반환자료형이 문자-char인 경우
//사용자로부터 문자를 입력받아 리턴하는 함수
// 함수 정의 - get_char -매개변수 없고, 리턴이 문자  
//리턴값: char result 
char get_ch() 
{
	double result;
	//문장들
	return result;
} 
//결과 대입 변수 : char value 
void doExam3()
{
	char value;
	value = get_ch();
}

//예제 4) 반환자료형이 없는 경우
//"생일 축하합니다" 화면에 출력
//함수 정의 - happyBirthday - 매개변수 없고, 리턴 없음  
//리턴값: 없음  
void happyBirthday()
{
	//1. "Happy Birthday" 출력 
	printf("Happy Birthday \n");
}
	
// 결과 대입 변수 없음 
void doExam4()
{
	happyBirthday();
}


