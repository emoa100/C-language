/*
	파일명: week7_while.c
	설  명: 반복문 - 조건 반복 - while 연습 
	작성자: mju
*/
#include <stdio.h>

//while 구문 - hello world 5번 출력 
void doExam1()
{
	// 변수 선언 & 값지정 - 정수 i 
	int i=0;               // 초기값
 	
	//3. while 구문       -- 초기값 --  반복조건(끝) -- 증감 
	while(i<5)             // 반복조건- 끝값 
	{
		printf("hello world\n");
		i++;  // i = i+1;  // 증감.. 
	}
	
	// 5 ----> 0 역으로.... 
	i=5;                  //1. 초기값
	while(i>0)            //2. 반복조건- 끝값 
	{
		printf("hello world\n");
		i--;              //3. 증감
	} 
}

void doExam2()
{
	//1.변수 선언 - i, sum, number 정수 
	int i, sum, number;

	//2. 입력메시지 & 입력
	printf("정수를 입력하시오 : ");
	scanf("%d", &number); 
	
	//3. while 구문       -- 초기값 --  반복조건(끝) -- 증감
	i=1;                 // 초기값 
	sum = 0;  
	while(i<=number)      //반복조건(끝값) 
	{
		sum = sum+i;
		i++;              //증감 
	} 
	//4. 출력 .. number까지의 합은 sum 입니다. 
	printf("%d까지의 합은 ,%d 입니다. \n", number, sum);
}
	
int main()
{
	doExam2();
	return 0;
}
