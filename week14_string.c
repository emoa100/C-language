/* 
	파일명 : week14_string.c
	설  명 : 문자열 표현, 문자열 복사(배열복사), 문자열 입력/출력, 포인터로 문자열 초기화  
	작성자 : mju
*/

// 전처리기
#include <stdio.h>
// main 함수
int main()
{
	return 0;
}

//////////////////////////////
// 문자열  
//////////////////////////////

//예제 1. 문자열 선언 & 초기화 
void doExam1()
{
	//1. 문자열 - str1  " "
	char str1[6] = "hello";
	//2. 문자열 - str2   {    }
	char str2[6] = {'a', 'b', '\0'};
	int scores[5] = {1,2,3};
	//3. 문자열 - str3   "   "
	char str3[] = "the capital city of korea";
	//4. 출력 - 문자열 str1, str2, str3 
	printf("%s %s %s \n", str1, str2, str3); 
}

//예제 2. 문자열 복사  
void doExam2()
{
	//1. 문자(배)열 source - 크기 6개 - "hello"
	char source[6] = "hello";
	//2. 문자열 target1 - 크기 6개
	char target1[6] = "";
	//3. 문자역 target2 - 크기 6개
	char target2[6] ;
	
	//4. 배열 복사  source -> target1 
	int i;
	for(i=0; i<6; i++)
		target1[i] = source[i];
	//5. 라이브러리 함수 strcpy : source -> target2 
	strcpy(target2, source);
	
	printf("%s %s %s \n", source, target1, target2);
}  

//예제 3. 문자열 입력 
void doExam3()
{
	//1. 변수 선언 - 문자열 name - 크기 10 
	char name[20];
	//2. 문자 출력 "이름을 입력하시오"
	printf("이름을 입력하시오 : ");
	//3. 문자 입력 - name 
	//scanf("%s", name); 
	fgets(name, 20, stdin);
	
	//4. 문자 출력 - name
	printf("%s\n", name);
}

//예제 4. 문자열 - 포인터 이용 
void doExam4()
{
	//1. 문자열 초기화 p - 포인터 이용 
	char *p = "helloworld";
	
	//2. 출력 - p
	printf("%s \n ", p);
	//3. p 로 다른 문자열 대입 
	p = "welcome to C world!";
	//4. 출력 - p
	printf("%s \n ", p);
	 
} 


