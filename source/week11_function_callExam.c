/*
   파일명: week11_function_callExam.c 
   설  명: 함수 호출 연 
   이  름: mju 
*/

//전처리기
#include <stdio.h>


//main() 함수  
int main()
{
	return 0;
}

//예제1) 두 수 입력 받아 그 중  큰수를 리턴 하는 함수   
//함수 정의 - max - 매개변수 정수 2개:x, y, 리턴 정수
//리턴형 함수이름(매개변수1, 매개변수2)
int max(int x, int y ) 
{ 
	//1. 조건문 - if
	if(x>y)
		return x;
	else
		return y; 
}

// min 함수 - 두 수 입력 받아 그 중 작은 수를 리턴 하는 함수   
//함수 정의 - min - 매개변수 정수 2개:x, y, 리턴 정수
//리턴형 함수이름(매개변수1, 매개변수2) 
int min(int x, int y ) 
{ 
	//1. 조건문 - if
	if(x>y)
		return y;
	else
		return x; 
}

 
//함수 호출 
void doExam1()
{
	//1. 변수 선언 - 정수 value
	int value;
	//2. 함수 호출 max
	-----------------------------------  // 인수(실제값),  리턴했을때 결과 대입 변수  
	//3. 함수 결과 출력
	printf("(10,20)의 max 값: %d \n", value);
	
	//함수호출 min 
	-----------------------------------  // 인수(실제값),  리턴했을때 결과 대입 변수 
	printf("(10,20)의 min 값: %d \n", value);
} 

//예제2) 반지름을 입력받아 원넓이를 구하는 함수  
//함수 정의 - get_area - 매개변수 정수 1개 :radius, 리턴 실수(double, float)  
//리턴자료형 함수이름(매개변수1)
double get_area(int radius) 
{
	//1. 변수정의 - 실수 result
	double result;
	//2. 넓이 계산 3.14*radius*radius
	result = 3.14*radius*radius;
	//3. 결과 리턴
	return result;
 } 
 
//가로 세로를 입력받아  사각형을 넓이를 구하는 함수 
// 함수 정의 -get_rect - 매개변수  2개 정수 width height, 리턴 실수
// 리턴자료형 함수이름(매개변수1, 매개변수2)
double get_rect(int width, int height)
{
	return width*height; 	
} 
   
//함수 호출 
void doExam2()
{
	//1. 변수 선언 -  실수 area 
	double area; 
	//2. 함수 호출 
	-----------------------------------  // 인수(실제값), 리턴했을때 결과 대입 변수- 실수 
	//3. 함수 결과 출력
	printf("10의 원의 넓이는 : %.2f \n", area); 
	-----------------------------------  // 인수(실제값) 2개,  리턴했을때 결과 대입 변수- 실수
	printf("10,20의 사각형의 넓이는 : %.2f \n", area);
}
 

//예제3) 사용자에게 정수를 입력 받아 리턴 받음 
//함수 정의 - get_integer - 매개변수는 없고, 정수 리턴 
//리턴자료형 함수이름()
int get_integer(void)
{ 

	//1. 변수 선언 - value
	int value;
	//2. 입력 메시지(정수를 입력하시오) & 입력
	printf("정수를 입력하시오 : ");
	scanf("%d", &value); 
	//3. value 리턴 
	return value;
}

//get_char :  사용자로부터 문자를 입력받아 리턴하는 함수
// 함수 정의 - get_char -매개변수 없고, 리턴이 문자 
//리턴자료형 함수이름()
char get_char()
{
	char ch;
	printf("문자를 입력하시오 : ");
	scanf("%c", &ch);
	return ch; 
} 

//print_char :  매개변수로  문자를 입력 받아 화면에 출력 
//함수 정의 - print_char - 매개변수는 문자 ch, 리턴 없음 
//리턴자료형 함수이름(매개변수)
void print_char(char ch)
{ 
	 printf("문자 - %c \n", ch);
} 

//함수 호출  
void doExam3()
{	
	//1.변수 선언 - 정수 x
	int x;
	//2. 함수 호출 get_integer
	----------------------------------- // 리턴했을때 결과 대입 변수- 정수 
	//3. 함수 결과 출력 
	printf("입력받은 정수 값은 : %d \n", x); 
	
	//1.변수 선언 - 문자 x
	char value;
	// 함수호출 get_char 
	-----------------------------------  // 리턴했을때 결과 대입 변수- 문자  
	printf("입력받은 문자는 : %c \n", value); 

	//함수호출 print_char 
	----------------------------------- 
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
	----------------------------------- 
}

/* 심화/////////////////////////////////////////
/////////////////////////////////////////////*/

//예제 5) 두 정수를 더해서 결과를 리턴하는 함수
//함수 정의 - add - 매개변수 정수 2개 x, y , 정수 리턴
//리턴자료형 함수이름(매개변수1, 매개변수2)
int add(int x, int y)
{
	//1. 더하기 결과 리턴 
	//return x+y;
	int result;
	result = x+y;
	return result;
}
//함수 호출   
void doExam5()
{
	//1.변수 선언 - 정수 x, y
	int x, y, value;
	//2. x, y에 get_integer 함수 출력 
	----------------------------------- 	
	----------------------------------- 
    //3. add 함수 출력
	-----------------------------------  // 인수(실제값- 2개), 정수 변수에 대입
	 
	//4. 함수 결과 출력 - 두수의 합은  
	printf("%d + %d = %d \n", x, y, value); 
}

//예제6) 팩토리얼 결과를 반환 - 1에서 n까지 곱하기  
//함수 정의 - factorial- 매개변수 정수 1개 number, 정수 리턴 
//리턴자료형 함수이름(매개변수) 
int factorial(int number)
{
	//1. 변수 선언 - 정수 result, i  
	int result, i;
	
	result = 1;
	//2. 반복문 
	for(i=1; i<= number; i++)
	{
		result = result*i;  // result *=i;
	}
	//3. 결과 리턴
	return result;  
}
 
 
//예제6) 팩토리얼 값을 이용하여 조합 값을 계산 
//함수 정의- combination - 매개변수 정수 2개 n, r, 정수 리턴
//리턴자료형 함수이름(매개변수1, 매개변수2)
int combination(int n, int r)
{
	//1. 변수 선언 - 정수 result 
	int result;	
	//2. n!/r!(n-r)!
	result = ----------------------------------- ;
	//3. 결과 리턴
	return result;
}
	  
void doExam6()
{
	//1.변수 선언 - 정수 n, r, value
	int n, r, value;
	//2. n, r에 get_integer 함수 출력 
	----------------------------------- 
	----------------------------------- 
    //3. combination 함수 호출 
	----------------------------------- 
	//4. 함수 결과 출력  - C(x, y)) 
	printf("%d C %d = %d \n", n, r, value);
}


//예제 7) 사용자가 입력한 정수만큼 *를 출력하는 함수
//함수 정의 - 매개변수 정수 1개, 리턴값이 없음 
void star(int number)
{
	int i;
	//1. 반복문
	for(i=0; i<number; i++)
	//2. * 를 출력
		printf("*");
		
	printf("\n");
}
//함수 호출
void doExam7()
{
	//1. 변수 선언 - 정수 num
	int num;
	//2. get_integer 함수 이용
	----------------------------------- 
	//3. 함수 호출 	
	star(num);
} 

