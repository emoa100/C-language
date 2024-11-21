/*
	파일명 : week12_variable.c
	설  명 : 지역변수, 전역변수, 정적(static) 변수 연습  
	작성자 : mju 
*/
#include <stdio.h>

int main()
{
	return 0;
} 
 

// 예제1. 지역변수 예제
// 지역변수는 블록 안에 선언되는 변수, 해당 함수나 블록 안에서만 사용 가능  
void doExam1()
{
 	//1. 변수선언 - 정수 i
	int i; 
	
    //2. 반복문 - i - 0~4까지
	for(i=0; i<5; i++)
	{
       	//3.블록내 변수 선언 - 정수 temp 초기화 1 
		int temp=1; 
		printf("temp = %d \n", temp);   // [결과] temp = 1 
		temp++;
		//블록 나가면 변수가 없어짐  
	}
}
 

//예제2. 전역 변수 - 정수 변수 범위 (프로그램 시작 ~ 프로그램 끝)
// 전역 변수 선언 - 정수 global_x 선언 - 초기값 123
int global_x = 123;

//2.1 매개변수/리턴 없는 sub1 함수
void sub1()
{
	// 전역 변수 global_x 를 456 으로 수정
	global_x = 456;
}


//2.2 매개변수/리턴 없는 sub2 함수 
void sub2()
{
	//// 전역 변수 global_x 를 789 으로 수정
	global_x = 789;
}


//2.3 함수 호출
void doExam2()
{
	//1.  출력 - 전역변수 
	printf("%d \n", global_x); // [결과] 123
	
	//2. 함수 호출 - sub1
	sub1();
	//3. 출력 - 전역변수
	printf("sub1 호출 후 %d \n", global_x); // [결과] sub1 호출 후 456
	
	//4. 함수 호출 - sub2
	sub2();
	//5. 출력 - 전역 변수
	printf("sub2 호출 후%d \n", global_x); // [결과] sub1 호출 후 789
}

//예제3. 전역변수 - # 은 몇번 출력 되나?
// 전역변수 선언 - 정수 gi
int gi;

//3.1 함수 정의 - # 을 10 번 출력 하는 함수 
//함수 이름 printSharp 매개변수 없음, 리턴 없음
void printSharp()
{
	// 1. 함수내 반복문 gi - 0~9까지
	for(gi = 0; gi<10; gi++)
		printf("#");
		
	printf("\n");
}

//3.2 함수 호출
void doExam3()
{
	//1. 반복문 gi - 0~4 까지
	for(gi=0; gi<5; gi++)              
	{
		//2. 함수 호출
		printSharp();
	}
}

//예제4. 전역변수 - 초깃값 자동으로 0 설정됨
//전역 변수 선언 - 정수 global_counter
int global_counter; 
void doExam4()
{
	//1. 출력 - 전역 변수 global_counter
	printf("%d \n", global_counter); // [결과] 0
}

//예제5. static(정적) 변수 - 변수의 생존(메모리 생존) 기간: 영구(프로그램 실행동안 전체) 
//5.1 함수 정의 
void sub3()
{
	//1. 자동 변수 선언 - 정수 auto_counter & 초기화 0
	int auto_counter =0;
	//2. 정적 변수 선언 - 정수 static_counter & 초기화 0
	static int static_counter = 0;
	
	//3. auto_counter 증가
	auto_counter++;
	//4. static_counter 증가
	static_counter++;
	
	//5. 출력 - auto_counter
	printf("auto_counter = %d \n", auto_counter);     
	//6. 출력 - static_counter
	printf("static_counter = %d \n", static_counter);
}

//5.2 함수 호출
void doExam5()
{
	//1. 변수 선언 - 정수 i	
	int i;

	//2. 반복문 - i - 0~2 까지
	for(i=0; i<3; i++)
		//3. 함수 호출 - sub3
		sub3();					 //[결과] auto_counter = 0, static_counter = 0
								 //[결과] auto_counter = 0, static_counter = 1
								 //[결과] auto_counter = 0, static_counter = 2
}



