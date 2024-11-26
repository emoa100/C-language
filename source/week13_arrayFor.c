/* 
	파일명 : week13_arrayFor.c
	설  명 : 배열 원소를 접근(for 반복), 두 배열간 복사, 비교  
	작성자 : mju
*/

// 전처리기
#include <stdio.h> 

// main 함수
int main()
{
	return 0;
}

//예제1. 배열과 반복 연습 
void doExam1()
{
	//1. 정수형 배열 scores- 5 공간 - 10, 20, 30, 40, 50 으로 초기화
	int scores[5] = {10, 20, 30 ,40 ,50};
	//2. 변수 선언 - 정수 i
	int i; 

	//3. 반복문 - i - 0~4까지 배열 scores 값 출력
	for(i=0; i<5; i++)
		printf("scores[%d]= %d \n", i, scores[i]);
		
	//4. 정수형 배열 50 개 test 0으로 초기화
	int test[50] = {0};
}

//예제2. 배열과 반복 - 배열에 사용자 입력 값 저장
void doExam2()
{
	//1. 변수 선언 - 정수 i
	int i;  
	//2. 배열 선언 - 정수형 grade, 5개 
	int grade[5];
	
	//3. 배열 입력 - 사용자 입력 
	//3.1 입력 메시지 출력 -  5명 점수 입력
	printf("5명 점수 입력하시오 : \n");
	//3.2 반복문  - i - 0~4까지 
	for(i=0; i<5; i++)
	{
		//3.3 사용자 입력 - 배열의 각 요소
		scanf("%d", &grade[i]);
	}	
	
	//4. 배열 출력  
	//4.1 반복문  - i - 0~4까지
	for(i=0; i<5; i++)
	{
		//4.2 grade 출력	
		printf("%d\n", grade[i]);
	}	
	
	//5. sum 을 구하기 
	int sum = 0;
	for(i=0; i<5; i++)
		sum += grade[i];
	printf("sum = %d \n", sum);
	 
}

//예제3. 배열과 반복 - 배열에 임의의 값 저장
// 필요한 헤더 : <stdlib.h> <time.h>
// 주요 함수: srand(), time(NULL), rand()  
void doExam3()
{
	//1. 변수 선언 - 정수 i
	int i; 
	//2. 배열 선언 - 정수형 scores, 5개 
	int scores[5];
	
	//3. 배열 입력 - 난수 
	//3.1 난수를 위한 기준점 설정 - 현재 시간
	srand((unsigned)time(NULL));
	//3.2 반복문 (값 저장) - i - 0~4까지 - 
	for(i=0; i<5; i++)
	{
		//3.3 값 저장 - 난수 자동  - 배열의 각 요소 - (100~199) 사이
		scores[i] = rand()%100 + 100;
	}
	
	//4. 배열 출력 
	//4.1 반복문 (값 출력) - i - 0~4까지 - 
	for(i=0; i<5; i++)	
	{
		//4.2 출력 - 배열 scores
		printf("scores[%d] = %d", i, scores[i]);
	}	 
 
}

//예제 4. 배열의 복사 + 배열의 비교 
void doExam5()
{
	//1. 변수 선언 - 정수 i
	int i; 
	//2. 배열 초기화  - 정수형 grades, 5개  - 23,35,67,45,21
	int grades[5] = {23,35,67,45,21};
	//3. 배열 선언 - 정수형 scores, 5개 
	int scores[5];
	
	//4. 배열 복사 
	//4.1 for 반복문 - i - 0~4까지,  각 원소를 복사  grade -> scores 
	for(i=0; i<5; i++)
	{
		//4.2 원소별 복사 
		scores[i] = grades[i];
	}
	
	//5.배열 비교
	//5.1 변수 선언 - 정수 equal  
	int equal = 1;  // 플래그 
	//5.2 for 반복문 - i - 0~4까지,  
	for(i=0; i<5; i++)
	{
		//5.3 조건문 - 두 배열의 원소가 같지 않으면... equal을 0 으로,  
		if(scores[i] != grades[i])
		{	
			equal = 0;  
			break;
		}
	}
	
	// 5.3 결과 출력 
	if(equal == 1)
		printf("두 배열이 같습니다. \n");
	else 
	 	printf("두 배열이 같지 않습니다. \n");

}

//예제 5. 2차원 배열 연습
void doExam5()
{
	//1. 정수형 2차원 배열 선언 - data - 3행 5열 
	int data[3][5]; 
	//2. 정수형 2차원 배열 초기화 - s - 3행 5열
	int s[3][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15 }};
	
	//3. 중첩 for
	//3.1 변수 선언 - 정수 i,j 
	int i, j;
	//3.2 반복문 
	for(i=0; i<3; i++)     // 행 
	{
		for(j=0; j<5; j++) // 열 
			printf("s[%d][%d] = %d ", i, j, s[i][j]);
		printf("\n");
	}		
}  










