/*
	파일명 : functionExam12.c
	설  명 : 함수 정의, 함수 호출, 라이브러리 연습 
	작성자 : 이름 
*/

// 전처리기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// main 함수
int main()
{
	doQuest1();
	return 0;
}

/* 함수 리뷰///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////*/


//예제1.  두 수 입력 받아 그 중  큰수를 리턴 하는 함수   
//함수 정의 - max - 매개변수 정수 2개:x, y, 리턴형 정수
//리턴형 함수이름(매개변수1, 매개변수2)
int max(int x, int y)
{
	int result;
	//문장들. 
	return result; 
}

 
//함수 호출 - max 함수 
void doExam1()
{
	int value;
	value = max(10, 20);
} 


//예제2.1 반지름을 입력받아 원넓이를 구하는 함수  
//함수 정의 - get_area - 매개변수 정수 1개 :radius, 리턴형 실수(double, float)  
//리턴자료형 함수이름(매개변수1)
double get_area(int radius)
{
	double result;
	//문장들
	return result;	
}
 
//예제2.2 가로 세로를 입력받아  사각형을 넓이를 구하는 함수 
// 함수 정의 -get_rect - 매개변수  2개 정수 width height, 리턴형 실수
// 리턴자료형 함수이름(매개변수1, 매개변수2)
double get_rect(int width, int height)
{
	double result;
	//문장들 
	return result;
}

   
//함수 호출 - get_area 함수, get_rect 함수
void doExam2()
{
	double value1, value2;
	value1 = get_area(10);
	value2 = get_rect(10, 20);

}
 

//예제3.1 사용자에게 정수를 입력 받아 리턴 받음 
//함수 정의 - get_integer - 매개변수는 없고, 리턴형 정수 
//리턴자료형 함수이름()
int get_integer( )
{
	int result;
	//문장들
	return result;
}


//예제 3.2  사용자로부터 문자를 입력받아 리턴하는 함수
// 함수 정의 - get_char -매개변수 없고, 리턴형 문자 
//리턴자료형 함수이름()
char get_char()
{
	char result;
	//문장들
	return result; 
}

//예제 3.3  매개변수로 받은 문자를 화면에 출력 
//함수 정의 - print_char - 매개변수는 문자 ch, 리턴 없음 
//리턴자료형 함수이름(매개변수)
void print_char(char ch)
{
	//문장들
}

//함수 호출  - get_integer 함수, get_char 함수, print_char 함수 
void doExam3()
{	
	int value1;
	char value2;
	
	value1 = get_integer();
	value2 = get_char();
	
	print_char('a');

}

//예제4. "생일 축하합니다" 화면에 출력
//함수 정의 - happyBirthday - 매개변수 없고, 리턴 없음 
// 리턴자료형 함수이름() - 리턴이 없을때는 void 
void happyBirthday()
{
	//문장들
}
	
// 함수 호출 
void doExam4()
{
	// 1. 함수 호출 
	happyBirthday();
}



//예제5. rand() 함수 연습 
// 임의의 값 설정 - 난수 발생 함수 + 시간 함수 
void doExam5()
{
	//1. 변수 선언 - 정수 i
 	int i;
	//2. 난수를 위한 시드 선정 - 현재 시간 이용 
	srand(time(NULL));
	//3. 반복문 for - 0~3, 난수 발생(1~45사이)
	for(i=0; i<4; i++)
	{
		//4. 난수 출력	
		printf("%d ", rand()%45+1);
	} 
} 

//예제6. 여러 수학 함수 연습
void doExam6()
{
	//1. 변수 선언 - 실수 result, value
	double result, value;
	//2. 변수 초기화 : value 에 1.6
	value = 1.6;
	//3. log 함수 이용 - value 
	result = log(value);
	//4. floor 함수 이용 - 내림함수 value - 결과 1 
	result = floor(value);
	//5. ceil 함수 이용 - 올림함수 value - 결과 2
	result = ceil(value);
	//6. fabs 함수 이용 - 실수 절대값 함수 - 결과 1.6 
	result = fabs(value);
	//7. pow 함수 이용 - 지수승 함수 10의 3 승- 결과 1000 
	result = pow(10,3);
	//8. sqrt 함수 이용  - 제곱근 함수 4의 제곱근  - 결과 2 
	result = sqrt(64);
	
	double result1, result2, result3;
	int angle = 90;
	double radian = 3.14*angle/180;
	//9. 삼각 함수(sin, cos, tan) 이용   
	result1 = sin(radian); 
	result2 = cos(radian);
	result3 = tan(radian);

	printf("sin 값 %f, cos 값 %f, tan 값 %f \n", result1, result2, result3);
} 



/* 실습문제 ///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
*/

// 실습문제1 - 사용자가 입력한 정수만큼 ‘*’를 출력하는 코드를 작성
//1.1 함수 정의 - 사용자에게 정수를 입력 받아 리턴
//함수 이름 get_number - 매개변수는 없고, 리턴형 정수
int get_number()
{
	int number;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &number); 
	
	return number;
} 

//1.2 함수 호출 - get_number
void doQuest1()
{
	int i;
	// 함수 호출
	int value = get_number();
	
	 
	//반복문 - i 0 ~ value-1 까지,    
	for(i=0; i<value; i++)
		printf("*");
}

