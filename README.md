# C-Language
C 언어 수강학생들이 핵심 프로그램을 보고 학습하는 페이지 입니다. 

## 1주차 실습
### [첫 프로그램! hello.world](https://github.com/baek-study/C-Language/blob/main/week1_hello.c)

## 2주차 실습
### [프로그램 기본 구조](https://github.com/baek-study/C-Language/blob/main/week2_basic.c)
<ol>
  <li>주석-한줄(//), 여러줄(/* */)</li>
  <li>전처리기-include 헤더 파일</li>
  <li>함수-시작합수 main()<br>
    &emsp; &emsp; 출력함수 print()-\n(한줄띄우기), \t(일정칸띄우기), %d(정수), %f(실수)</li>
</ol>

## 3주차 실습
### [변수](https://github.com/baek-study/C-Language/blob/main/week3_variable.c)
<ol>
  <li>변수 선언 :  int number; char ch; double pi; </li>
  <li>변수 값 저장 : number = 10, ch = 'a'; pi= 3.14; </li>
  <li>변수 초기화 : int number =10; char ch = 'a';</li>
</ol>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/week3_printf.c)
<ol>
  <li>형식지정자 :  %d(정수), %c(문자), %f(실수)  </li>
 <li> 기본 포맷 : printf("%d, %c, %f \n", number,ch,pi); //형식지정자 와 변수 1:1 매핑 - 갯수, 자료형 일치 
  </li>
  <li>필드폭 : 전체 자릿수 : %10d(10자리수로) </li>
  <li>정밀도 : 소숫점 자릿수 : %.3f(소수점 3자리까지) </li>
</ol>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/week3_scanf.c)
<ol>
 <li>형식지정자 :  %d(정수), %c(문자), %f(실수-float), %lf(실수-double) </li>
 <li> 기본 포맷 : scanf("%d", &number); // 주소 연산자 &를 꼭 써줘야함!!  <br>
    &emsp; &emsp;scanf("%lf", &pi); // 변수가 double인 경우 형식지정자는 lf(long float)로 써야함 </li>
</ol>
