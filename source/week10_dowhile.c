/*
   파일명: subControl.c
   설  명: 무한루프, 보조제어문(break, continue), 반복문(do ~ while) 
   이  름: mju 
*/

//전처리기
# include<stdio.h>

// 반복문 - do ~ while 연습 
void doExam1()
{
	//1.변수 선언 - 정수 i
	int i; 
	
	//2. 반복문: do ~ while 
	i = 0;  
	do     
	{
		//3. 메뉴 출력
		printf("1-새로만들기\n"); 
		printf("2-파일열기\n");
		printf("3-파일닫기 \n");
		
		printf("하나를 선택하시오 : ");
		//4. 메뉴 입력 
		scanf("%d", &i);
	}while(i<0 || i>3); // 조 
	
	printf("선택된 메뉴 : %d \n", i);
	
	// 무한루프 버전
	while(1)
	{
		//3. 메뉴 출력
		printf("1-새로만들기\n"); 
		printf("2-파일열기\n");
		printf("3-파일닫기 \n");
		
		printf("하나를 선택하시오 : ");
		//4. 메뉴 입력 
		scanf("%d", &i);
		
		if(i>=1 && i<=3)     
			break;	
	} 	
	
}

// 반복문 - while 연습 
void doExam2()
{
	//1.변수 선언 - 정수 i 
	int i; 
	//2. 조건반복 - while

	i=0;         //2.1 초기값  i - 0
	while(i<0)   //2.2 반복조건  - 5번 
	{	
	    //3. hello world 출력 
		printf("hello world");
	    i++;     //2.3 증감 	 - 1씩 증가
	}
}

// 반복문 - for 연습 
void doExam3()
{
	//1.변수 선언 - 정수 i
	int i;
	//2. 횟수 반복 - for -  초기값;반복조건;증감 - 0에서 5번 반복 
	for(i=0; i<5; i++ )
	{
	    //3. hello world 출력
	    printf("hello world");
	}
}

int main()
{
	doExam1();
	return 0;	
} 

 
