/* 
	파일명 : week12_array.c
	설  명 : 배열 선언, 배열 원소 접근(인덱스), 배열 값 저장, 배열 초기화 연습 
	작성자 : mju
*/

// 전처리기
#include <stdio.h>
// main 함수
int main()
{
	return 0;
}

//예제1. 배열 선언 
void doExam1()
{
	//1. 정수형 배열 score - 60개 공간 
	int score[60];
	//2. 실수형 배열 cost - 12개 공간
	double cost[12];
	//3. 문자형 배열 name - 50개 공간
	char name[50];
}

//예제2. 배열에 요소 접근 및 저장
void doExam2()
{
	//1. 정수형 배열 score - 60개 공간 
	int score[60];
	//2. 값 저장 score 0, 1, 2, 에 10, 20, 30 값 넣기
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[59] = 100;
	//3. 값 출력 score 0, 1, 2	
	printf("%d, %d, %d, %d\n", score[0], score[1], score[2], score[59]);
	
	
	//4. 실수형 배열 cost - 12개 공간	
	double cost[12];
	//5. 값 저장 cost 0, 1, 2에 0.2, 1.3, 5.6 값 넣기
	cost[0] = 0.2;
	cost[1] = 1.3;
	cost[2] = 5.6;
	cost[11] = 9.9;
	//6. 값 출력 cost 0, 1, 2
	printf("%f, %f, %f, %f\n", cost[0], cost[1], cost[2], cost[11]);
	
		
	//7. 문자형 배열 name - 50개 공간
	char name[50];
	//8 값 저장 name 0, 1, 2에 'a', 'b', 'c' 값 넣기
	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'c';
	name[49] = 'z';
	//9 값 출력 name 0, 1, 2
	printf("%c, %c, %c, %c\n", name[0], name[1], name[2], name[49]);
} 

//예제3. 배열의 초기화  + 배열과 반복
void doExam3()
{
	//1. 정수형 배열 score1- 5 공간 - 10, 20, 30, 40, 50 으로 초기화
	int score1[5] ={10,20,30,40,50};
	//2. 정수형 배열 score2- 5 공간 - 10, 20, 30 으로 초기화
	int score2[5] ={10,20,30};
	//3. 정수형 배열 score3- 공간표시없음 - 10, 20, 30, 40, 50 으로 초기화
	int score3[] ={10,20,30,40,50};
	
	//4. 출력 - score1 출력   [결과] 10, 20, 30, 40, 50 
	printf("%d, %d, %d, %d, %d\n", score1[0], score1[1], score1[2], score1[3], score1[4]);
	//5. 출력 - score2 출력   [결과] 10, 20, 30, 0, 0
	printf("%d, %d, %d, %d, %d\n", score2[0], score2[1], score2[2], score2[3], score2[4]);
	//6. 출력 - score3 출력   [결과] 10, 20, 30, 40, 50 
	printf("%d, %d, %d, %d, %d\n", score3[0], score3[1], score3[2], score3[3], score3[4]);
	
	//반복 연습
	//7. 변수 선언 - 정수 i
	int i; 
	
	//8. 반복문 - i - 0~4까지 score1 값 출력
	for(i=0; i<5; i++)
		printf("%d ", score1[i]);
		
	//9. 반복문 - i - 0~4까지 score2 값 출력
	for(i=0; i<5; i++)
		printf("%d ", score2[i]);
		
	//10. 반복문 - i - 0~4까지 score3 값 출력
	for(i=0; i<5; i++)
		printf("%d ", score3[i]);
}






