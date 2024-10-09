/*
	강  좌 : 제 3 강 
	파일명: week3_scanf.c
	설  명: 표준 입력 함수 scanf() - 형식지정자
	작성자: mju
*/

#include<stdio.h>

void doExam1(); // 입력 함수 기본 포맷 연습  
void doExam2(); // 실수(float) 입력 연습
void doExam3(); // 실수(double) 입력 연습 

int main()
{
	return 0;
}

//입력 함수 기본 포맷 연습  
void doExam1()
{
	//1. 변수 선언 - 정수 x, y 
	int x;
	int y;
	
	//2. 안내메시지를 출력
	printf("두 개의 정수를 입력하시오: ");
	
	//3. 정수 입력 - 정수시 %d,  주소 연산자 & 사용  
	scanf("%d %d", &x, &y);  //주소값 쓰는것을 유의!!!  
	
	//4. 정수 출력  
	printf("첫번째 정수:%d, 두번째 정수:%d\n", x, y); 
}

// 실수(float) 입력 연습
//원의 반지름을 입력 받고, 원의 면적을 구한 후 출력 
void doExam2()
{
	//1. 변수를 선언 - 실수 - 반지름, 면적 
	float radius;
	float area; 
	
	//2. 안내메시지를 출력
	
	printf("반지름을 입력하시오: ");
	
	//3. 실수 입력 - float 시 %f,  주소 연산자 & 사용
	scanf("%f", &radius); //주소값 쓰는것을 유의 
	
	//4. 면적을 계산
	area = radius*radius*3.14;
	
	//5. 면적을 출력 
	printf("원의 면적 : %f\n", area);
}

// 실수(double) 입력 연습
//원의 반지름을 입력 받고, 원의 면적을 구한 후 출력 
void doExam3()
{
	//1. 변수를 선언 - 반지름, 면적 - 실수
	double radius;
	double area; 
	
	//2. 안내메시지를 출력
	printf("반지름을 입력하시오: ");
	
	//3. 실수 입력 - double 시 %f,  주소 연산자 & 사용
	scanf("%lf", &radius); //주소값 쓰는것을 유의 
	
	//4. 면적을 계산
	area = radius*radius*3.14;
	
	//5. 면적을 출력 
	printf("원의 면적 : %f\n", area);
}
