# C-Language
C 언어 수강학생들이 핵심 프로그램을 보고 학습하는 페이지 입니다. 

## 1주차 실습
### [첫 프로그램! hello, world](https://github.com/baek-study/C-Language/blob/main/source/week1_hello.c)
// C 프로그램 : Hello World <br> 
#include <stdio.h><br>
int main() <br>
{<br>
  &emsp;&emsp;printf("Hello, World");<br>
  &emsp;&emsp;return 0;<br>
}<br>
<br>

## 2주차 실습 - 기본구조 
### [프로그램 기본 구조](https://github.com/baek-study/C-Language/blob/main/source/week2_basic.c)
<ul>
  <li>주석: 한줄(//), 여러줄(/* */)</li>
  <li>전처리기: include 헤더 파일</li>
  <li>함수: 시작합수 main(), 출력함수 printf() <br>
  &emsp; \n(한줄띄우기), \t(탭띄우기), </li>
</ul>

<br>

## 3주차 실습 - 변수
### [변수](https://github.com/baek-study/C-Language/blob/main/source/week3_variable.c)
<ul>
  <li>변수 선언 :  int number;&ensp; char ch;&ensp; double pi;&ensp; float f;<br>
   &emsp; &emsp; int(정수), char(문자), double/float(실수) 
  </li>
  <li>변수 값 저장 : number = 10;&ensp; ch = 'a'; &ensp;pi= 3.14; </li>
  <li>변수 초기화 : int number =10;&ensp; char ch = 'a';&ensp; double pi=3.14;</li>
</ul>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/source/week3_printf.c)
<ul>
  <li>형식지정자 :  %d(정수), %c(문자), %f(실수)  </li>
 <li> 기본 포맷 : printf("%d, %c, %f \n", number,ch,pi); &ensp;//형식지정자 와 변수 1:1 매핑 - 갯수, 자료형 일치 
  </li>
  <li>필드폭 : 전체 자릿수 : %10d(10자리수로) </li>
  <li>정밀도 : 소숫점 자릿수 : %.3f(소수점 3자리까지) </li>
</ul>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/source/week3_scanf.c)
<ul>
 <li>형식지정자 :  %d(정수), %c(문자), %f(실수 float), %lf(실수 double) </li>
 <li> 기본 포맷 : scanf("%d", &number);&ensp; // 주소 연산자 &를 꼭 써줘야함!!  <br>
    &emsp; &emsp; &emsp;&ensp;scanf("%lf", &pi); &ensp;// 변수가 double인 경우 형식지정자는 lf(long float)로 써야함 </li>
</ul>

<br>

## 4주차 실습 - 연산자
### [기호상수](https://github.com/baek-study/C-Language/blob/main/source/week4_constant.c)
<ul>
  <li>기호상수선언 : #define 전처리기 이용 &ensp; ex) #define MAX 100   </li>
  <li>기호상수선언 :  const 키워드 &ensp; ex) const int MAX = 100;  </li>
</ul>


### [연산자-산술/증감/복합](https://github.com/baek-study/C-Language/blob/main/source/week4_operator.c)
<ul>
  <li>산술 연산자 : +, -, *, /, % (나머지) &ensp;// 정수/정수 = 정수 </li>
  <li>증감 연산자: x++( x 값 1 증가) x-- (x값 1 감소)</li>
  <li>복합 대입 연산자: +=, -=, *=, /=, %= 등 <br>
 &emsp; &emsp;  x += 3;   // x = x+3; 를 축약한 표현
  </li>
</ul>

<br>

## 5주차 실습 - 조건문 1
### [연산자-관계/논리](https://github.com/baek-study/C-Language/blob/main/source/week5_operator2.c)
<ul>
  <li>관계연산자 : ==, !=, >=, <=, >, <  </li>
  <li>논리연산자 : &&(and), ||(or), !(not) </li>
</ul>

### [조건문-if/if~else](https://github.com/baek-study/C-Language/blob/main/source/week5_if.c)
<ul>
  <li>단순 if : <b>if</b>(조건) { &emsp;  } </li>
  <li>if~else : <b>if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; &emsp;  <b>else</b> {&emsp;   } </li>
</ul>

<br>

## 6주차 실습 - 조건문 2
### [조건문-다중if](https://github.com/baek-study/C-Language/blob/main/source/week6_multiIf.c)
<ul>
  <li>중첩 if : if 안에 if <br>
   &emsp; &emsp; <b>if</b>(조건) {  if(조건) { } else { }  } <br>
    &emsp; &emsp; <b>else</b> {  if(조건) { } else { }  } 
  </li>
  <li>연속 if : if ~ else if ~ else <br>
   &emsp; &emsp; <b>if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; <b>else if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; <b> else</b> { &emsp;  } 
  </li>
</ul>
