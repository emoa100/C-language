/*
   파일명: week11_libarary.c
   설  명: 라이브러리 - 난수 함수, 시간 함수, 수학 함수 이용 
   이  름: 이름 
*/

//전처리기
#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time(NULL)
#include <math.h>    

//함수 원형
void doExam1();
void doExam2();
void doExam3(); 
 
//main() 함수 
int main()
{	
	return 0;
}
//예제1) rand() 함수 연습 
// 임의의 값 설정 - 난수 발생 함수 + 시간 함수 
void doExam1()
{
	//1. 변수 선언 - 정수 i
	int i; 
	//2. 난수를 위한 시드 선정 - 현재 시간 이용 
	srand((unsigned)time(NULL));
	//3. 반복문 for - 0~3, 난수 발생
	for(i=0; i<4; i++)
	{
		printf("%d ", rand()%45+1);
	} 
} 

//예제 2) 수학 함수 이용해 로그값 구하는 예제
void doExam2()
{
	//1. 변수 선언 - 실수 number, logValue	
	double number, logValue;
	//2. 입력 메시지 & 입력(number)
	printf("실수를 입력하시오 : ");
	scanf("%lf", &number); 
	//3. log 함수 이용
	logValue = log(number);
	
	//4. 결과 출력 
	printf("%f의 로그값은 %f 입니다 \n", number, logValue);
}

//예제 3)여러 수학 함수 연습
void doExam3()
{
	//1. 변수 선언 - result, value
	double value, result;
	//2. 변수 초기화 : value = 1.6
	value = 1.6;
	//3. floor 함수 이용 - 내림함수 - 결과 1 
	result = floor(value);
	//4. ceil 함수 이용 - 올림함수 - 결과 2 
	result = ceil(value); 
	//5. fabs 함수 이용 - 실수 절대값 함수 - 결과 1.6 
	result = fabs(value);
	//6. pow 함수 이용 - 지수승 함수 - 결과 1000 
	result = pow(10, 3)
	//7. sqrt 함수 이용  - 제곱근 함수 - 결과 2 
	result = sqrt(4)
} 
