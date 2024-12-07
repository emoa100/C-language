/* 
	파일명 : week14_pointer.c 
	설  명 : 포인터 변수 선언, 기존 변수와 연결, 간접참조 연산자 * , 포인터와 배열, 포인터와 함수  
	작성자 :
*/

// 전처리기
#include <stdio.h>
// main 함수
int main()
{
	return 0; 
}
//////////////////////////////
// 포인터 
//////////////////////////////

//예제 1. 간접참조 연산자 *
void doExam1()
{
	//1. 변수선언 & 초기화 , 정수 i(10), 문자 c(69), 실수 f(12.3)
	int i = 10;
	char c = 69;
	float f = 12.3;
	//2. 포인터 변수 선언과 초기화 동시에
	//2.1 정수 포인터 변수 p 선언 & 초기화 - 정수 변수 i (주소)와 연결 
	int* p = &i;
	//2.2 문자 포인터 변수 pc 선언 & 초기화 -  문자 변수 c (주소)와 연결  
	char* pc = &c;
	//2.3 실수 포인터 변수 pf 선언 & 초기화 - 실수 변수 f (주소)와 연결
	float* pf = &f;
	
	//3. 출력 - 직접참조 vs 간접참조 
	//3.1 출력 - 정수 i (직접참조), 포인터 변수 p가 가르키는 곳의 값(간접참조)
	printf("직접참조 i : %d, 간접참조 *p : %d \n", i, *p);
	printf("i의 주소 &i: %p,  p : %p \n", &i, p);
	//3.2 출력 - 문자 c (직접참조), 포인터 변수 pc가 가르키는 곳의 값(간접참조)
	printf("직접참조 c : %c, 간접참조 *pc : %c \n", c, *pc);
	printf("c의 주소 &c: %p,  pc : %p \n", &c, pc);
	//3.3 출력 - 실수 f (직접참조), 포인터 변수 pf가 가르키는 곳의 값(간접참조)
	printf("직접참조 f : %f, 간접참조 *pf : %f \n", f, *pf);
	printf("f의 주소 &f: %p,  pf : %p \n", &f, pf);	
}  

//예제 2. 포인터 변수 - 값을 바꿀수 있음
void doExam2()
{
	//1. 변수 선언 - 정수(x = 10, y = 20)
	int x = 10;
	int y = 20;
	
	//2. 정수 포인터 변수 p
	int* p;
	
	//3. p를 x에 연결
	p = &x;
	//4. 출력 - p 와 p가 가리키는 곳의 값(간접참조)을 출력
	printf("p : %p, *p : %d \n", p, *p);
	
	//5. p를 y에 연결
	p = &y; 
	//6. 출력 - p의 주소와 p가 가리키는 곳의 값(간접참조)을 출력 
    printf("p : %p, *p : %d \n", p, *p);
    
    y = 30;
    printf("y = %d \n", y);
    
    *p = 40;   // 간접참조 연산자를  통해서 값을 바꿀수 있음 
    printf("y = %d \n", y);  // y = 40
    
}

//예제 3. 포인터와 배열 + 포인터 연산 
void doExam3()
{
	//1. 정수 배열 초기화 - a - 크기 4 - 10,20,30,40
	int a[4] = {10, 20, 30, 40};
	
	//2. 정수 포인터 변수 p
	int* p;
	
	//3. 포인터 변수 p와 정수 배열을 연결
	p = a;   // 배열 이름은 주소  
	
	// 출력
	printf("a : %p \n", a);
	printf("a[0]= %d, 주소 %p \n", a[0], &a[0]);
	printf("a[1]= %d, 주소 %p \n", a[1], &a[1]);
	printf("a[2]= %d, 주소 %p \n", a[2], &a[2]);
	printf("a[3]= %d, 주소 %p \n", a[3], &a[3]);

	//4출력 
	//4.1 포인터 변수 p+0 (주소) 출력, 간접참조 *(p+0) 출력
    printf("p = %p, 간접참조 %d  \n", p+0, *(p+0));
	//4.2 포인터 변수 p+1 (주소) 출력, 간접참조 *(p+1) 출력
	printf("p+1 = %p 간접참조 %d\n", p+1, *(p+1));
	//4.3 포인터 변수 p+2 (주소) 출력, 간접참조 *(p+2) 출력
	printf("p+2 = %p 간접참조 %d\n", p+2, *(p+2));
	//4.4 포인터 변수 p+3 (주소) 출력, 간접참조 *(p+3) 출력
    printf("p+3 = %p 간접참조 %d\n", p+3, *(p+3));
	//5.출력.. for 구문 이용하여 출력 
	int i;
	for(i=0; i<4; i++)
		printf("p+i = %p 간접참조 %d\n", p+i, *(p+i));
	//6. 출력.. for 구문 이용 - p++ 수헹 
	for(i=0; i<4; i++)
	{
		printf("p+i = %p 간접참조 %d\n", p, *p);			
		p++; // 다음 배열 원소를 가리킴 
	}
	
	p=a;  // p가 다시 배열의 처음을 가리킴  
	printf("p = %p, 간접참조 %d  \n", p, *p);
	p++; //p = p+1;
	printf("p = %p, 간접참조 %d  \n", p, *p);
	p++; //p = p+1;
	printf("p = %p, 간접참조 %d  \n", p, *p);
	p++; // p = p+1;
	printf("p = %p, 간접참조 %d  \n", p, *p);
} 

//예제4. 포인터와 함수 ------------------------------------ 
//예제4.1 - 일반 함수 : x 값을 프린트 
//함수 정의 - print_x - 매개변수 1개 - 정수 1개  - 리턴 없음 
void print_x(int x)
{
	printf("x = %d \n", x);
	x = x+1;
}

//예제4.2 포인터와 함수 - y 값을 프린트 
//함수 정의 - print_pointer_y - 매개변수 1개 - 정수 포인터 변수 1개 - 리턴 없음 
void print_pointer_y(int* y)
{
	printf("*y = %d \n", *y);
	*y = *y + 1;
}

//예제4.3 함수 호출
void doExam4()
{
	//1. 변수 선언 - 정수 x=3, y=3
	int a = 3;
	int b = 5;
	
	//2. print_x 호출 -- x
	print_x(a);
	
	//3. print_pointer_y 호출 -- y ?
	print_pointer_y(&b);   // 인수가 주소!!!!!!!!!! 
	
	printf("a= %d, b= %d \n", a, b);
} 



//예제 5.1 - 포인터와 함수 - 정수 2개를 합함
// 함수 정의 - get_sum_pointer - 매개변수 2개 (정수 포인터 변수 x, y) - 리턴 정수
int get_sum_pointer(int* x, int* y)
{
	int sum;
	sum = *x + *y;
	return sum;
}
  
//예제 5.2 
//함수 호출
void doExam6()
{
	//1. 변수 선언 - 정수 3개 : a=10, b=20, sum
	int sum, a=10, b=20;
	//2. 함수 호출 
	sum = get_sum_pointer(&a, &b);
}  
