/* 
	강  좌 : 제 3 강 
	파일명 : week3_variable.c  
	설  명 : 변수를 선언, 값을 저장, 초기화 연습
	작성자 : mju
*/

#include <stdio.h> 

void doExam1(); // 변수 선언 연습
void doExam2(); // 변수 값 저장
void doExam3(); // 변수 초기화 
void doExam4(); // 변수 값 변경
 
int main()
{
	return 0;
}

//변수 선언 연습
void doExam1()
{ 
	//1. 변수 선언 : 자료형 변수이름;
	// 정수형 변수 number
	int number ; 
	// 문자형 변수 ch
	char ch;
	// 실수형 변수 interest_rate
	double interest_rate; 
	
	//2개를 동시에 선언
	int height, width; 
}

//변수의 값을 저장
void doExam2()
{
	//1. 변수 선언 
	char ch;
	int i;
	double interest_rate;
	
	//2. 변수의 값 저장(대입) 
	ch = 'A';  //문자일때 작은따옴표를 꼭 사용
	i = 60;
	interest_rate = 4.9;
	
	//3. 출력 - 형식지정장 : %c (문자) %d (정수) %f(실수) 
	printf("ch = %c, i = %d, interest_rate = %f \n", ch, i, interest_rate);
}

//변수 초기화 = 선언과 동시에 값을 저장
void doExam3()
{
	//1. 변수 선언 + 값 저장  
	char ch = 'a';
	int i = 60;
	double interest_rate = 4.9;
}

//변수 값 변경
void doExam4()
{ 
	//1. 변수 선언 
	int value1 = 20;
	int value2;
	
	//2. 변수 값 변경  
	value2 = value1;
	value2 = 30; 
	
	value1 = 30; 
} 
 
 
