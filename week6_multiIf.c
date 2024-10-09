/*
	강  좌 : 제 6 강 
    파일명 : week6_multiIf.c
    설  명 : 중첩if, 연속if(if~else if~else), switch-case 문 연습  
    작성자 : mhc, 24-10-08
*/

#include<stdio.h>

void doExam1(); // 중첩 if 연습 
void doExam2(); // 연속 if  연습
void doExam3(); // switch-case문 연습  

int main() 
{
	return 0;
}

// 중첩 if 연습 - if 안에 if 구문
// 외부 if : 성적을 입력받아 80 이상인지 그렇지 않은지
//   if내 if   :80이상인 경우 - 90 이상인지 그렇지 않은지
//   else내 if : 80미만인 경우 -  70이상인지 그렇지 않은지 
void doExam1() 
{
    //1.변수 선언
    int score;
    
	//2.안내메시지 & 입력
    printf("점수를 입력하세요: ");
    scanf("%d", &score);
    
	//3.외부 if - score > 80 + 내부 if
    if (score >= 80) 
	{
        if (score >= 90) 
		{	
            printf("%d는 A입니다\n", score);
        }
        else 
		{
            printf("%d는 B입니다\n", score);
        }
    }
    else 
	{
        if (score >= 70) 
		{
            printf("%d는 C입니다\n", score);
        }
        else 
		{	
            printf("%d는 D 또는 F입니다\n", score);
        }
    }
}


//연속 if  연습 - 성적 프로그램
// 성적을 입력받아 90 이상이면 A, 그렇지 않고 80 이상이면 B, 그렇지 않고 70 이상이면 C , 그렇지 않고 60 이상이면 D, 그렇지 않으면 F 
void doExam2() {
    //1.변수 선언
    int score;
    
    //2.안내메시지 & 입력
    printf("점수를 입력하시오: ");
    scanf("%d", &score);
    
    //3.연속 if
    if (score >= 90) 
	{
        printf("%d는 A학점입니다.\n", score);
    }
    else if (score >= 80) 
	{
        printf("%d는 B학점입니다.\n", score);
    }
    else if (score >= 70) 
	{
        printf("%d는 C학점입니다.\n", score);
    }
    else if (score >= 60) 
	{
	    printf("%d는 D학점입니다.\n", score);
    }
    else {
        printf("%d는 F학점입니다.\n", score);
    }
}

//switch case문 연습
void doExam3() 
{
    //1.변수 선언
    int number = 1;
    
    //2.switch ~case
    switch (number)
    {
	    case 0:
	        printf("없음\n");
	        break;
	    case 1:
	        printf("하나\n");
	        break;
	    case 2:
	        printf("둘\n");
	        break;
	    default:
	        printf("많음\n");
	        break;
    }
}

