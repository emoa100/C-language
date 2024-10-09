# C-Language
C 언어 수강학생들이 핵심 프로그램을 보고 학습하는 페이지 입니다. 

## 1주차 실습
### [첫 프로그램! hello.world](https://github.com/baek-study/C-Language/blob/main/source/week1_hello.c)

<br>

## 2주차 실습 - 기본구조 
### [프로그램 기본 구조](https://github.com/baek-study/C-Language/blob/main/source/week2_basic.c)
<ul>
  <li>주석-한줄(//), 여러줄(/* */)</li>
  <li>전처리기-include 헤더 파일</li>
  <li>함수-시작합수 main()<br>
    &emsp; &emsp; 출력함수 print()-\n(한줄띄우기), \t(일정칸띄우기), %d(정수), %f(실수)</li>
</ul>

<br>

## 3주차 실습 - 변수
### [변수](https://github.com/baek-study/C-Language/blob/main/source/week3_variable.c)
<ul>
  <li>변수 선언 :  int number; char ch; double pi; </li>
  <li>변수 값 저장 : number = 10, ch = 'a'; pi= 3.14; </li>
  <li>변수 초기화 : int number =10; char ch = 'a';</li>
</ul>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/source/week3_printf.c)
<ul>
  <li>형식지정자 :  %d(정수), %c(문자), %f(실수)  </li>
 <li> 기본 포맷 : printf("%d, %c, %f \n", number,ch,pi); //형식지정자 와 변수 1:1 매핑 - 갯수, 자료형 일치 
  </li>
  <li>필드폭 : 전체 자릿수 : %10d(10자리수로) </li>
  <li>정밀도 : 소숫점 자릿수 : %.3f(소수점 3자리까지) </li>
</ul>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/source/week3_scanf.c)
<ul>
 <li>형식지정자 :  %d(정수), %c(문자), %f(실수-float), %lf(실수-double) </li>
 <li> 기본 포맷 : scanf("%d", &number); // 주소 연산자 &를 꼭 써줘야함!!  <br>
    &emsp; &emsp; &emsp;scanf("%lf", &pi); // 변수가 double인 경우 형식지정자는 lf(long float)로 써야함 </li>
</ul>

<br>

## 4주차 실습 - 연산자
### [상수](https://github.com/baek-study/C-Language/blob/main/source/week4_constant.c)
<ul>
  <li>상수선언 : #define 전처리기 이용  <br>
    &emsp; &emsp; ex) #define MAX 100   </li>
  <li>상수선언 :  const 키워드 <br>
    &emsp; &emsp;  const int MAX = 100;  </li>
</ul>


### [연산자-산술/증감/복합](https://github.com/baek-study/C-Language/blob/main/source/week4_operator.c)
<ul>
  <li>상수선언 : #define 전처리기, const 키워드 <br>
    &emsp; &emsp; ex) #define MAX 100  또는 const int MAX = 100 
  </li>
  <li>산술 연산자 : +, -, *, /, % (나머지) // 정수/정수 = 정수 </li>
  <li>증감 연산자: x++( x 값 1 증가) --x (x값 1 감소)</li>
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
  <li>단순 if : if( ) {   } </li>
  <li>if~else : if( ) {   } <br>
   &emsp; &emsp; &emsp; &emsp; else {   } </li>
</ul>

<br>

## 6주차 실습 - 조건문 2
### [조건문-다중if](https://github.com/baek-study/C-Language/blob/main/source/week6_multiIf.c)
<ul>
  <li>중첩 if : if 안에 if <br>
   &emsp; &emsp; if( ) {<br>
    &emsp; &emsp;&emsp; &emsp; if( ) { } else { } <br>
    &emsp; &emsp;&emsp; &emsp; }
  </li>
  <li>연속 if : if ~ else if ~ else <br>
   &emsp; &emsp; if( ) {   } <br>
   &emsp; &emsp; else if( ) {   } <br>
   &emsp; &emsp;  else {   } 
  </li>
</ul>
