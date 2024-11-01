/*
   파일명: week9_for.c
   설  명: 반복문 - for 문(횟수반복), 중첩 for 문  
   작성자: mju  
*/ 

#include <stdio.h>
 
// 횟수 반복: for - 5번 hello 출력
void doExam1()
{
	//1. 변수 선언 - i - 정수 
	int i;
	
	//2. for - 초기값;반복조건;증감 - i - 0~4(5번) 
	for(i=0 ; i<5 ; i++)
	{
		printf("hello world!\n");   //3. 출력  
	}
}

// 횟수 반복: for - 1~10 까지 합출력
void doExam2()
{
	//1. 변수 선언 - i, sum - 정수
	int i, sum;
	 
	//2. 변수 초기화 
	sum = 0;
	
	//3. for - 초기값 ; 반복조건 ; 증감 - i = 1~10까지 
	for(i=1 ; i<=10 ; i++)      //i<11
	{
		sum = sum + i;          //4. 합 계산  
	 } 
	printf("합은 %d\n", sum);   //5. 합 출력  
}

//중첩  for 구문 - * 표 직사각형으로 출력  
void doExam3()
{ 
	//1. 변수 선언 - 정수 i, j
	int i, j;
	 
	//2. 중첩 for
	//2.1 외부 for - 초기값 ; 반복조건 ; 증감 - i - 0~4 
	for(i=0 ; i<5 ; i++)
	{
		//2.2 내부 for - 초기값 ; 반복조건 ; 증감 - j - 0~9 
		for(j=0 ; j<10 ; j++)
		{
			printf("*");    //3. 별 출력  
		}
		printf("\n");        //다음 줄 출력  
	} 
}

//중첩 for - 구구단 출력  
void doExam4()
{ 
	//1. 변수 선언 - 정수 dan, gob
	int dan, gob;
	 
	//2. 중첩 for
	//2.1 외부 for - 초기값 ; 반복조건 ; 증감 - dan- 2~9 단  
	for(dan=0 ; dan<5 ; dan++)
	{
		//2.2 내부 for - 초기값 ; 반복조건 ; 증감 - gob - 1~9 곱  
		for(gob=0 ; gob<10 ; gob++)
		{
			printf("%d * %d = %d \n", dan, gob, dan*gob);    //3.구구단 출력  
		}
		
	} 
}


 int main()
 {
 	doExam4();
 	return 0;
 }
