/*
   파일명: subControl.c
   설  명: 무한루프, 보조제어문(break, continue), 반복문(do ~ while) 
   이  름:
*/

//전처리기
# include<stdio.h>

// 보조제어문 - break 
void doExam1()
{
	//1. 변수 선언 - 정수 num
	int num;
	//2. 무한루프
	while(1)
	{	
	    //3. 입력 메시지 출력 - 숫자를 입력하시오( 0 입력시 종료) 
		printf("숫자를 입력하시오( 0 입력시 종료) : ");
	    //4. 입력 - num
		scanf("%d", &num);
	    //5. num 값 출력 - 입력된 숫자는 * 입니다.  
	    printf("입력된 숫자는 %d 입니다.\n", num);
	    
	    //6. 조건문 - num가 0 이면 루프 탈출
		if(num == 0)
			break; 
	}
} 

//보조제어문 - break 
void doExam2()
{
	//0. 기호상수선언 -  SEED_MONEY  10000  - const
	const int SEED_MONEY = 10000; 
	//1. 변수 초기화 - 정수 year = 0, money = SEED_MONEY 
	int year = 0;
	int money = SEED_MONEY;
	
	//2. 무한 루프
	while(1)
	{
		//3. 수식 계산 - year는 1 증가, money는 30% 
		year++; 
		money += money*0.3;
		
		printf("%d년에는 저금이 %d 원 입니다.\n", year, money);
			 
		//4. 조건문 - money가 10*SEED_MONEY 이상 이면 루프 탈출
		if(money > 10*SEED_MONEY )
			break;
	}
	
	//5. 출력 - year 
	printf("10배가 되려면 %d 년이 걸립니다 \n", year);
	
}
 
// 보조제어문 - continue 
void doExam3()
{
	//1. 변수 선언 - 정수, i
	int i; 
	//2. 변수 초기화 - 정수 sum = 0 
	int sum = 0;
	//3. 반복문 i : 0~10까지 하나씩 증가
	for(i=0; i<=10; i++ )
	{
		//4. 조건문 - i가 짝수 이면  - 다음 반복으로
		if( i%2 == 0)
			continue;	
		//5. i값을 sum에 더함 - 홀수 인 경우 더함
		sum += i; //sum = sum + i;
	}
	//6. sum 값 출력
	printf("1에서1-까지 홀수의 합은 %d 입니다 \n", sum);
			 
}


int main()
{
	doExam1();
	return 0;	
} 


