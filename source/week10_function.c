/*
	파일명 : functionExam.c
	설  명 : 함수 정의, 함수 호출, 매개변수(입력), 반환값(return, 결과) 
	작성자 : mju 
*/

# include <stdio.h>

//함수 정의 - 리턴이 없는 함수 정의 
void print_stars()
{
	//1. 변수 선언
	int i; 
	//2. for i = 0 ~ 30까지
	for(i=0; i<30; i++)
	{
		// 3. 출력 *
		printf("*");
	}
	printf("\n");
}

//함수 호출  - 리턴이 없는 함수 호출  
void doExam1()
{
	print_stars();
	printf("Hello World! \n");
	print_stars();
} 

//함수정의 - 매개변수와 반환값이 있는 함수 정의
int max( int x, int y)
{
	if(x>y)
		return x;
	else 
		return y;
}

// 함수정의 - 두 매개 변수의 합을 구해서 리턴하는 함수 정의  
int sum( int x , int y)
{
	int sumValue = x+y;
	return sumValue;
	//return x+y;
}
// 함수정의 - 한 매개변수를 받아서 그것에 1을 더하는 함수
int increase(int x)
{
	int result;
	result = x+1;
	return result;
}
// 한 매개변수를 받아서 그것에 1을 빼는 함수 decrease
int decrease(int x)
{
	int result;
	result = x-1;
	return result;
}

//함수 호출 - 매개변수와 반환값이 있는 함수를 호출
void doExam2()
{
	int larger;
	
	int first, second;
	//사용자 입력 -  
	printf("두정수를 입력하시오 : ");
	scanf("%d %d", &first, &second);
	
	// max 값을 구함 
	larger = max(first, second);
	printf("(%d, %d)중에 큰값은 %d 입니다. \n",first ,second , larger);

	int result1, result2, result3;
	//sum  호출 - result1 
	result1 = sum(first, second);
	//increase 호출 - result2
	result2 = increase(first);
	//decrease 호출 - result3 
	result3 = decrease(first);
	
	printf("(%d, %d)의 합은  %d 입니다. \n",first ,second , result1);
	printf("(%d)의 1증가값은  %d 입니다. \n",first , result2);
	printf("(%d)의 1감소값은  %d 입니다. \n",first , result3);
}
 
 int main()
{
	doExam2();
	return 0;
}

