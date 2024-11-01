# C-Language
C 언어 수강학생들이 핵심 프로그램을 보고 학습하는 페이지 입니다. 
변수 - 연산자 - 조건문(if, switch) - 반복문(while, for) - 함수 - 배열 - 포인터
<br>

## 9주차 실습 - 반복문 
### [반복문-for](https://github.com/baek-study/C-Language/blob/main/source/week9_for.c)
<ul>
  <li>for 문 : 횟수반복(ex.10번) <br>
   &emsp; &emsp;- 초기값, 반복조건(끝), 증감 <br>
   &emsp; &emsp; int i=0; <b>for</b>(i=0 ; i<5 ; i++) {  문장들; } <br>
  </li>
</ul>

<ul>
  <li>중첩 for 문 : for 안에 for 문 <br>
   &emsp; &emsp; <b>for</b>(i=2 ; i<9 ; i++) {  <br>
   &emsp; &emsp; &emsp; &emsp;  <b>for</b>(j=1 ; j<10 ; j++) {  문장들; } } <br>
  </li>
</ul>

<br>

## 7주차 실습 - 조건문 & 반복문 
### [조건문-switch](https://github.com/baek-study/C-Language/blob/main/source/week7_switch.c)
<ul>
  <li>switch~case 문 : 여러 조건에서 선택 <br>
   &emsp; &emsp; <b>switch</b>(변수) { <br>
   &emsp; &emsp; &emsp; <b>case 0 :</b>문장들; break; <br>
   &emsp; &emsp; &emsp; <b>default:</b>문장들; break;  } 
  </li>
</ul>

### [조건연산자&형변환](https://github.com/baek-study/C-Language/blob/main/source/week7_condOperator.c)
<ul>
  <li>조건연산자 : 조건?참문자:거짓문장<br>
   ex) absValue = a>0 ? a : -a ; </li>
   <li>형변환 : 캐스트 연산자 (int), (float) <br>
   ex) int i = (int)1.12;  </li>

</ul>

### [반복문-while](https://github.com/baek-study/C-Language/blob/main/source/week7_while.c)
<ul>
  <li>while : 조건반복(ex. 비밀번호맞을때까지) <br>
   &emsp; &emsp;- 초기값, 반복조건(끝), 증감 <br>
   &emsp; &emsp; int i=0; <b>while</b>(i<5) {  문장들; i++;  } <br>
  </li>
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

## 4주차 실습 - 연산자
### [기호상수- define/const](https://github.com/baek-study/C-Language/blob/main/source/week4_constant.c)
<ul>
  <li>기호상수선언 : #define 전처리기 이용 <br>&ensp; ex) #define MAX 100   </li>
  <li>기호상수선언 :  const 키워드<br> &ensp; ex) const int MAX = 100;  </li>
</ul>


### [연산자-산술/증감/복합](https://github.com/baek-study/C-Language/blob/main/source/week4_operator.c)
<ul>
  <li>산술 연산자 : +, -, *, /, % (나머지) &ensp;<br>
  &ensp; => 정수/정수=정수, &ensp; 5/3 = 1 </li>
  <li>증감 연산자: x++, ++x( x 값 1 증가) <br>
  &ensp; x--, --x (x값 1 감소)</li>
  <li>복합 대입 연산자: +=, -=, *=, /=, %= 등 <br>
 &emsp;=>   x += 3;   // x = x+3; 를 축약한 표현
  </li>
</ul>

<br>

## 3주차 실습 - 변수
### [변수](https://github.com/baek-study/C-Language/blob/main/source/week3_variable.c)
<ul>
  <li>변수 선언 :  int num;&ensp; char ch;&ensp; double pi;&ensp; <br>
   &emsp;=>  int(정수), char(문자), double(실수) 
  </li>
  <li>변수 값 저장 : num=10;&ensp; ch='a'; &ensp;pi=3.14; </li>
  <li>변수 초기화 : int num=10;&ensp; char ch='a';&ensp; double pi=3.14;</li>
</ul>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/source/week3_printf.c)
<ul>
  <li>형식지정자:  %d(정수), %c(문자), %f(실수)  </li>
  <li> printf("%d, %c, %f \n", num,ch,pi);<br>
  &ensp;=> 형식지정자와 변수 갯수/자료형 일치</li>
  <li>필드폭(자릿수): %10d (10칸차지) </li>
  <li>정밀도: %.3f (소수점 3자리까지) </li>
</ul>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/source/week3_scanf.c)
<ul>
 <li>형식지정자 :  %d(정수), %c(문자), %lf(double), %f(float) </li>
 <li> scanf("%d %c %lf", &num, &ch &pi) ;<br>
  &ensp; =>변수 앞에 주소연산자 & 필수!!<br>
  &ensp; =>double 변수에 형식지정자는 %lf 사용</li>
</ul>

<br>


## 2주차 실습 - 기본구조 
### [프로그램 기본 구조](https://github.com/baek-study/C-Language/blob/main/source/week2_basic.c)
<ul>
  <li>주석: 한줄(//), 여러줄(/* */)</li>
  <li>전처리기: include 헤더 파일</li>
  <li>함수: 시작합수 main() <br>
  &emsp; &emsp;출력함수 printf()- \n, \t </li>
</ul>

<br>


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








