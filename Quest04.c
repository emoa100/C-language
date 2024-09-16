/*
프 로 그 램 : 4주차 실습 연습 문제 
             시험 점수 입력, 총합, 평균 구하기
프로그래머 : mju 2023-09-26
*/

#include<stdio.h>

//기호상수 선언 
#define PI 3.14 

int main()
{
	//1. 기호상수선언  
	const int MAX=100;
	
	//2. 변수 선언 
	int kor, eng, math, total, result;
	double avg;
		
	//3. 변수 입력 - 국어, 영어, 수학 점수 입력 
	printf("국어 점수를 입력하시오:"); 
	scanf("%d", &kor);
	printf("영어 점수를 입력하시오:"); 
	scanf("%d", &eng);
	printf("수학 점수를 입력하시오:"); 
	scanf("%d", &math);
	
	//4. 산술 연산 연습  - 총합, 평균 구하기 
	total = kor+eng+math;
	avg = total/3.0;        // 정수/정수 = 정수,   정수/실수 = 실수
	printf("당신의 점수 총합은 %d점 입니다. 평균은 %f입니다.\n", total, avg);
	
	//5. 관계(크거나 같은지), 논리(&&, ||, !) 연산 연습  
	result = (avg>=80)&&(avg<90);
	printf("평균이80  이상이면서 90 미만 인지 결과는 %d 입니다.", result); 
	
	return 0; 
} 
