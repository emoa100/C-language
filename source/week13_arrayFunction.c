/* 
	파일명 : week13_arrayFunction.c
	설  명 : 함수에 배열을 전달할때, 함수 정의(배열표시, 배열크기), 함수호출(배열이름, 실제배열크기) 			  
	작성자 : mju
*/

// 전처리기
#include <stdio.h>

// main 함수
int main()
{
	return 0; 
}

//예제 1. 배열과 함수
//함수 정의 - get_average - 매개변수 2개: 정수 array[] , 정수 size - 정수 리턴
int get_average(int array[], int size)
{
	//1.변수 선언 - 정수 i, sum(0으로 초기화) 
	int i, sum = 0;
	
	//2.배열의 합 구하기 
	//2.1반복문 - i - 0~(size-1)까지 
	for(i=0; i<size; i++)
		//2.2 sum에 추가
		sum = sum+array[i];
	//2.3 합 출력 
	printf("sum = %d \n", sum);
	
	//4. 평균(sum/size)을 리턴 
	return sum/size;
}

//함수 호출 
void doExam1()
{
	//1. 정수형 배열 scores 초기화 - 5개 공간 - 임의의 값 5개 
	int scores[5] = {1,2,3,4,5};
	//2. 변수 선언 - 정수 result (결과 대입 변수) 
	int result;
	
	//3. get_average 함수 호출 후 result에 결과 대입 
	result = get_average(scores, 5);
	
}

//예제 2. 배열과 함수 - 기존 배열의 값을 1 증가 
//함수 정의 - modify_array - 매개변수 2개: 정수 array[] , 정수 size - 리턴 없음 
void modify_array(int array[], int size)
{
	//1.변수 선언 - 정수 i
	int i;
	
	//2.기존 배열의 값 변경 
	//2.1반복문 - i - 0~(size-1)까지 
	for(i=0; i<size; i++)
	{
		//2.2 기존 원소에 + 1을 추가
		array[i]++;  //array[i] += 1;
	}		
}

//예제 3. 배열과 함수 - 배열의 값을 출력 
//함수 정의 - print_array - 매개변수 2개: 정수 array[] , 정수 size - 리턴 없음 
void print_array(const int array[], int size)
{
	//1.변수 선언 - 정수 i
	int i;	
	
	//2.배열 출력 
	//2.1 반복문 - i - 0~(size-1)까지 
	for(i=0; i<size; i++)
		//2.2 원소 출력
		printf("array[%d] = %d \n", i, array[i]); 
}


//함수 호출
void doExam2()
{
	//1. 정수형 배열 scores 초기화 - 10개 공간
	int scores[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//2. print_array 호출
	print_array(scores, 10);
		
	//3. modify_array 호출 
	modify_array(scores, 10);
	
	//4. print_array 호출
	printf("modify 후================ \n");
	print_array(scores, 10);
	
} 	

//예제 4. 함수의 매개변수로 배열이 2개 ( 정수형 배열 1개, 문자형 배열 1개) - 리턴 없음  
void test_array(int array1[], int size1, char array2[], int size2)
{
	
}

