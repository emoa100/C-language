# C-Language
C 언어 수강학생들이 핵심 프로그램을 보고 학습하는 페이지 입니다. <br>
핵심 : 변수 - 연산자 - 조건문(if, switch) - 반복문(while, for) - 함수 - 배열 - 포인터
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

## 2주차 실습 - 기본구조 
### [프로그램 기본 구조](https://github.com/baek-study/C-Language/blob/main/source/week2_basic.c)
<ul>
  <li>주석: 한줄(//), 여러줄(/* */)</li>
  <li>전처리기: #로 시작 하는 코드를 처리 <br>
  &emsp; 헤더파일 - stdio.h </li>
  <li>함수: 주 함수&emsp; int main(){&emsp;} <br>
  &emsp; 출력 함수&emsp; printf("hello")<br>
  &emsp; 출력제어문자&emsp; \n(다음줄), \t(탭) </li>
</ul>

<br>

## 3주차 실습 - 변수와 자료형
### [변수와 자료형]()
<ul>
  <li>변수 : 데이터를 저장하는 공간 </li>
  <li>이름 규칙 : 알파벳(a~z, A~Z), 숫자(0~9), 밑줄(_)로 구성 <br>
   &ensp;- 시작시 숫자 안됨, 이름내 공백 안됨, 예약어 안됨 </li>
  <li>자료형 : 정수형(int), 실수형(double/float), 문자형(char) </li>
</ul>

### [C 프로그램에서 변수](https://github.com/baek-study/C-Language/blob/main/source/week3_variable.c)
<ul>
  <li>변수 선언 :  int num;&ensp; char ch;&ensp; double pi;&ensp; </li>
  <li>변수 값 저장 : num=10;&ensp; ch='a'; &ensp;pi=3.14; </li>
  <li>변수 초기화 : int num=10;&ensp; char ch='a';&ensp; double pi=3.14;</li>
  <li>기호상수선언 : const int MAX = 100;</li>
</ul>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/source/week3_printf.c)
<ul>
  <li>형식지정자:  %d(정수), %c(문자), %f(실수)  </li>
  <li> printf("%d, %c, %f", num, ch, pi);<br>
  &ensp;=> 형식지정자와 변수 갯수/자료형 일치</li>
</ul>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/source/week3_scanf.c)
<ul>
 <li>형식지정자 :  %d(정수), %c(문자), %lf(double), %f(float) </li>
 <li> scanf("%d %c %lf", &num, &ch, &pi) ;<br>
  - 변수 앞에 주소연산자 & 필수!!<br>
  - double 변수에 형식지정자는 %lf 사용</li>
</ul>

<br>

## 4주차 실습 - 연산자&조건문 1
### [기호상수](https://github.com/baek-study/C-Language/blob/main/source/week4_constant.c)
<ul>
  <li> <b>#define</b> EXCHAGE_RATE 1120   </li>
  <li><b>const</b> int MAX = 100;  </li>
</ul>

### [연산자](https://github.com/baek-study/C-Language/blob/main/source/week4_operator.c)
<ul>
  <li>산술: +, -, *, /, % (나머지) &ensp;<br>
  &ensp;=>정수/정수=정수, &ensp; 5/3=1&ensp;5%3=2 </li>
  <li>관계/비교 : ==, !=, >=, <=, >, <  </li>
  &ensp;=>같다(<b>==</b>), 같지않다(<b>!=</b>)
  <li>논리 : &&(and), ||(or), !(not) </li>
  <li>우선순위: 산술>관계>논리</li>
</ul>

### [조건문](https://github.com/baek-study/C-Language/blob/main/source/week5_if.c)
<ul>
  <li>단순 if : <b>if</b>(num>0)<br>
   &ensp;&ensp; { printf("양수");  } </li>
</ul>
<br>



### [조건문-단순 if](https://github.com/baek-study/C-Language/blob/main/source/week5_if.c)
<ul>
  <li>단순 if : <b>if</b>(num>0) { printf("양수");  } </li>
  <li>if~else : <b>if</b>(num>0) {printf("양수");  } <br>
   &emsp; &emsp; &emsp;  <b>else</b> &emsp;{printf("양수아님");   } </li>
</ul>

<br>

## 5주차 실습 - 연산자&조건문2
### [연산자](https://github.com/baek-study/C-Language/blob/main/source/week5_operator2.c)
<ul>
  <li>산술/관계/논리 연산자
  <li>복합 : x += 3;   // x = x+3; <br>
 &emsp;산술과 대입 연산자 결합 
  <li>증감: ++, -- <br>
  &ensp; x++, ++x( x값 1 증가) <br>
  &ensp; x--, --x (x값 1 감소)</li>
  </li>
</ul>



<br>

## 6주차 실습 - 조건문
### [조건문](https://github.com/baek-study/C-Language/blob/main/source/week5_if.c)
<ul>
  <li>단순 if 문 : 조건 1개 </li>
  <li>if~else 문 : 조건 2개 <br>
   &emsp;<b>if</b>(num>0) <br>
   &emsp; {<br>
   &emsp; &emsp; printf("양수"); <br>
   &emsp; } <br>
   &emsp; <b>else</b> <br>
   &emsp; {<br>
   &emsp; &emsp;printf("양수아님");   <br>
   &emsp; } <br> </li>
  <li>if ~ else if ~ else 문:조건 3개이상 <br>
   &emsp; <b>if</b>(score>90)<br> 
   &emsp; {<br>
   &emsp; &emsp;printf("A");  <br>
   &emsp; } <br>
   &emsp; <b>else if</b>(score>90)<br> 
   &emsp; {<br>
   &emsp; &emsp;printf("B");  <br>
   &emsp; } <br>
   &emsp; <b> else</b><br> 
   &emsp; {<br>
   &emsp; &emsp;printf("C");  <br>
   &emsp; } <br>
  </li>
</ul>

### [조건연산자&형변환](https://github.com/baek-study/C-Language/blob/main/source/week7_condOperator.c)
<ul>
  <li>조건연산자 : 조건?참문장:거짓문<br>
   ex) absValue = a>0 ? a : -a ; </li>
   <li>형변환 : 캐스트/(int), (float) <br>
   ex) int i = (int)1.12;  </li>

</ul>




## 7주차 실습 - 조건문 & 반복문 
### [조건문-switch~case문](https://github.com/baek-study/C-Language/blob/main/source/week7_switch.c)
<ul>
  <li>제어식 값은 항상 정수(+문자) <br>
   &emsp; <b>switch</b>(number)<br> 
   &emsp; {<br>
   &emsp; &emsp;<b>case 0:</b>  <br>
   &emsp; &emsp;&emsp;printf("없음\n"); <br>
   &emsp; &emsp;&emsp;break;  <br>
   &emsp; &emsp;<b>case 1:</b>  <br>
   &emsp; &emsp;&emsp;printf("하나\n"); <br>
   &emsp; &emsp;&emsp;break;  <br>    
   &emsp; &emsp;<b>default:</b>  <br>
   &emsp; &emsp;&emsp;printf("많음\n"); <br>
   &emsp; &emsp;&emsp;break;  <br>    
   &emsp; } <br>

  </li>
  </li>
</ul>

### [반복문-for](https://github.com/baek-study/C-Language/blob/main/source/week9_for.c)
<ul>
  <li> 횟수반복 : 초기값, 반복조건(끝), 증감 <br>
   <b>for</b>(i=0 ; i<5 ; i++) <br> 
   {<br>   
   &emsp;&emsp;printf("Hello World!\n");<br> 
   } <br>
  </li>
</ul>







<br>

## 9주차 실습 - 반복문 2

### [다중 for]()
<ul>
  <li> for 안에 for 문 <br>
   <b>for</b>(dan=1 ; dan<10 ; dan++)
    <br>{  <br>
   &emsp; <b>for</b>(i=1 ; i<10 ; i++) <br>
   &emsp; {  <br>
   &emsp;&emsp;  printf(“%d * %d = %d”, dan, i, dan*i);  <br>
    &emsp; } <br>
    } <br>
  </li>
</ul>

### [반복문-while]()
<ul>
  <li>조건반복: 초기값, 반복조건(끝), 증감  <br>
    int i=0; <br>
    <b>while</b>(i<5)<br>
    {<br>
      &emsp; printf("%d \t",i);<br>
      &emsp; i++; <br>
     } <br>
  </li>
</ul>

### [보조제어문-break/continue]()
<ul>
  <li>  <b>while</b>(i<5)<br>
    {<br>
      &emsp;if(i == 3)<br>
      &emsp;&emsp;<b>break;</b>&emsp;&emsp; // 제어를 벗어남<br>
      &emsp; if(i%2 == 0)<br> 
      &emsp;&emsp; <b>continue;</b>&emsp;// 현재 반복을 중단하고 다음 반복을 시작<br> 
      &emsp; printf("%d \t",i);<br> 
      &emsp; i++; <br>
   } <br>
  </li>

</ul>

## 10주차 실습 -  함수 

### [함수정의 & 함수 호출 - 매개변수/반환값 없음]()
<ul>
  <li>함수 정의  <br>
    <b>void doExam()</b><br>
    {<br>
    &emsp;  printf("함수 doExam() 실행 \n");<br>
    }<br>
  <li>함수 호출 <br>
    <b>doExam();</b> </li>
</ul>

### [함수정의 & 함수 호출-매개변수/반환값 있음]()
<ul>
  <li>함수 정의  <br>
   <b>int max(int x, int y)</b><br>
    {<br>
     &emsp;  if(x>y)<br>
     &emsp; &emsp; return x;  <br>
     &emsp;  else  <br>
     &emsp; &emsp;  return y; <br>
    } <br>  
  </li>
  <li>함수 호출 <br>
    int maxValue = <b>max(10, 20); </b></li>
</ul>

### [매개변수&반환값]()
<ul>
  <li><b>매개변수:</b> 함수 정의시 값을 전달받는 변수  <br>
  <b>인수:</b> 함수 호출시 실제로 전달되는 값    </li>
  <li><b>반환값:</b>(함수 정의) 함수 결과로 돌려주는 값 <br> 
  <b>결과변수:</b> 함수호출 후 결과대입   </li>
</ul>


##  11주차 실습 -  함수2 

### [매개변수&인수](https://github.com/baek-study/C-Language/blob/main/source/week11_function_parameter.c)
<ul>
  <li>매개변수: 값을 전달받는 변수 <br>
    (함수정의) max(<b>int x, int y</b>)  
  </li>
  <li>인수:함수에 실제로 전달되는 값   <br>
    (함수호출)  max(<b>10, 20</b>)
  </li>
  <li>매개변수&인수 개수일치/타입일치 <br>
   int max(int x, int y)<br>
    &emsp; - max(10, 20)<br>
   double get_area(int radius)<br>
    &emsp; - get_area(10)<br>
    void print_ch(char ch)<br>
     &emsp; - print_ch('a')
  </li>
</ul>


### [반환값&결과대입](https://github.com/baek-study/C-Language/blob/main/source/week11_function_return.c)
<ul>
  <li>반환값:함수 결과로 돌려주는 값  <br>
   (함수정의) return x 
  </li>
  <li>결과대입변수:함수호출후 결과대입   <br>
    (함수호출)  <b>value</b> = max(10, 20)
  </li>
  <li>반환형&반환값&결과대입변수 일치 <br> 
    <b>int</b> max() { <b>int</b> ret; 문장들; return <b>ret</b>;} <br>
    - <b>int</b> value1 = max();<br>
    <b>double</b> area() { <b>double</b> ret; 문장들; return <b>ret</b>;}<br>
    - <b>double</b> value3 = area(); <br>
    <b>char</b> get() { <b>char</b> ret; 문장들; return <b>ret</b>;} <br>
    - <b>char</b> value2 = get();<br>
  </li>
</ul>

### [함수정의&호출연습=매개변수&인수+반환값&결과대입](https://github.com/baek-study/C-Language/blob/main/source/week11_function_all.c)
&emsp;-[함수정의(헤더)연습](https://github.com/baek-study/C-Language/blob/main/source/week11_function_parameterExam.c)<br>
&emsp;-[함수호출연습](https://github.com/baek-study/C-Language/blob/main/source/week11_function_callExam.c)<br>

### [함수원형](https://github.com/baek-study/C-Language/blob/main/source/week11_function_prototyping.c)
<ul>
  <li>컴파일러에게 함수를 미리 알림
  </li>
  <li>함수헤더 + 세미콜론 <br>
   &emsp; int max(int x, int y);
  </li>
</ul>

### [라이브러리](https://github.com/baek-study/C-Language/blob/main/source/week11_library.c)
<ul>
  <li> 컴파일러에서 제공하는 함수<br>
 표준입출력(stdio.h), 표준유틸리티(stdlib.h), 수학(math.h), 시간(time.h), 문자열(string.h)등</li> 
  <li>난수발생: rand(), srand(time(NULL))<br>
   - rand() : 난수 생성, rand()%6 + 1<br>
   - srand(정수) : 기준점변경, srand(10) <br>   
   - tme(NULL) : 현재시간 초 반환<br>  
   - (unsigned)tme(NULL) : 0 이상<br> 
  </li>

  <li>수학함수:math.h를 사용 </li>
  - floor(실수)/ceil(실수) : 내림/올림<br>
  - sqrt(실수)/pow(실,실) : 제곱근/지수승 <br>
  - sin(실수) : 사인 함수 - 라디안 값 입력 <br>
  </li>
</ul>

<br>

## 11주차 실습 -  라이브러리 함수 & 함수와 변수



### [라이브러리]()
<ul>
  <li>컴파일러에서 제공하는 함수 : stdio.h 등 <br>
  <li>난수발생함수: stdlib.h, time.h 사용<br>
   - <b>rand()</b> : 난수 생성, rand()%6 + 1<br>
   - <b>srand(정수)</b> : 기준점변경, srand(10) <br>   
   - <b>(unsigned)tme(NULL)</b> : 현재시간 초 반환  <br>  
  </li>
  <li>수학함수: math.h를 사용 </li>
  - sqrt(실수)/pow(실수,실수) : 제곱근/지수승 <br>
  </li>
</ul>

### [지역변수vs전역변수]()
<ul>
  <li><b>지역변수</b>: 블록(함수)내 선언<br> 
    - 해당 블록내 사용, 자동 초기화 x <br>
    - 매개변수(인수로 초기화) <br>
  </li>
  <li><b>전역변수</b>: 함수외 선언<br>
    - 프로그램 전체 사용, 자동 초기화(0) <br>
    - 같은 이름시 지역변수가 우선  
  </li>
  <li><b>static(정적)변수</b>: 영구 생존<br>
    - 프로그램 실행동안 계속 유지<br>
    - <b>static</b> int count = 0;<br>
  </li>
</ul>


### [배열](https://github.com/baek-study/C-Language/blob/main/source/week12_array.c)
<ul>
  <li>개념: 같은 자료형을 여러개 <br>
    메모리의 연속된 공간에 저장 
  </li>
  <li>배열선언: int scores[5]; // 대괄호 <br>
    - 인덱스 idx: 일련번호, 0부터 시작
  </li>
  <li>원소접근: scores[3]; //배열[idx]
  </li>
  <li>값저장: scores[3] = 20; <br> //배열[idx] = 값
  </li>
  <li>초기화: int scores[5]={10,20,30,40,50};
  </li>
</ul>

## 12주차 실습 -  배열(Array)

### [배열선언 & 접근](https://github.com/baek-study/C-Language/blob/main/source/week12_array.c)
<ul>
  <li>개 념 : 같은 자료형을 여러개, 연속된 공간 </li>
  <li>선 언 : int scores[5]; &ensp; // 5개 정수<br>
  <li>원소접근: scores[3]; &ensp; // 인덱스는 0부터</li>
  <li>값저장: scores[3] = 20; </li>
  <li>초기화: int scores[5]={10,20,30,40,50};</li>
</ul>

### [배열과 반복](https://github.com/baek-study/C-Language/blob/main/source/week13_arrayFor.c)
<ul>
  <li>for(i=0; i<5; i++) <br>
    &emsp;printf("%d \n", scores[i]);
  </li>
</ul>




## 13주차 실습 - 포인터(Pointer)  

### [포인터 선언 & 간접참조](https://github.com/baek-study/C-Language/blob/main/source/week13_pointer.c)
<ul>
  <li>개 념 : 다른 변수를 가리킴, 주소를 가짐 </li>
  <li>선 언 : int * p; &ensp;// 정수 포인터</li>
  <li>값저장 : p = &i; &ensp;// 변수 i의 주소 </li>
  <li>간접참조: *p  //포인터가 가리키는 값 <br>
    - printf("%d", *p); </li>
</ul>
<br>

### [포인터와 배열](https://github.com/baek-study/C-Language/blob/main/source/week13_pointer.c)
<ul>
  <li> int *p = scores ; &ensp;// 포인터가 배열 가리킴</li>
  <li>포인터연산: p ++ ;&ensp;//포인터가 증가  <br>
  <li> for(i=0; i<5; i++) { <br>
    &emsp;printf("%d \n", *p);
    &emsp;p++;
    }
  </li>
</ul>

### [문자열 ](https://github.com/baek-study/C-Language/blob/main/source/week14_string.c)
<ul>
  <li>개 념 : char 배열, NULL(\0) 추가 </li>
  <li>초기화 :  char str[4]="hi"  <br>
    - char *p = "hi"; //포인터 이용 </li>
  <li>문자열 입출력 : %s 사용 <br>
    printf("%s", str); scanf("%s", str); <br>  
  </li>
  <li>복 사 : strcpy(target, source);   </li>      
</ul>
    
<br>






### [함수연습](https://github.com/baek-study/C-Language/blob/main/source/week12_function.c)

<br>


## 13주차 실습 -  배열2 & 포인터

### [배열과반복](https://github.com/baek-study/C-Language/blob/main/source/week13_arrayFor.c)
<ul>
  <li>for구문으로 배열 원소 접근 <br>
    for(i=0; i<5; i++) <br>
    &emsp;printf("%d \n", scores[i]);
  </li>
  <li>배열 복사/비교 : 각각 원소를 처리</li>
  <li> 2차원: int data[3][5]; //[행][열] </li>
</ul>


### [배열과함수](https://github.com/baek-study/C-Language/blob/main/source/week13_arrayFunction.c)
<ul>
  <li>함수정의 : 배열(위치), 배열크기 <br>
    void getArr(int arr[], int size) { } 
  </li>
  <li>함수호출 : 배열이름, 배열크기 <br>
    getArr(scores, 5);   
  </li>
</ul>



## 14주차 실습 -  포인터2 & 문자열

### [포인터2](https://github.com/baek-study/C-Language/blob/main/source/week14_pointer.c)
<ul>
  <li> 간접참조 * : 포인터가 가리키는 값 <br>
    int* p = &i; printf("%d", <b>*p</b>); 
  </li>
  <li>포인터연산: 데이터 크기 만큼 증감 <br>
    char(1byte), int(4byte) 등 
  </li>
  <li> 포인터와 배열: 배열을 가리킬 때 <br>
    int a[2]={10,20}; //a는 배열 주소 <br>
    int *p = a;
  </li>
  <li> 포인터와 함수: 매개변수가 포인터 <br>
    void printX(int *){..}, printX(&a);//인수는 주소
  </li>
</ul>


### [문자열](https://github.com/baek-study/C-Language/blob/main/source/week14_string.c)
<ul>
  <li>문자열: char 배열, NULL(\0) 추가 <br>
    char str[4]="hi", char str[] = "hi"
  </li>
  <li>문자열 입출력 : %s 사용 <br>
    printf("%s", str); <br>
    scanf("%s", str);   
  </li>
  <li>문자열 복사 : 배열 복사(for 이용) <br>
     strcpy(target, source);   
  </li>  
  <li>문자열 선언: 포인터 이용 가능 <br>
     char *p = "HelloWorld";  
  </li>    
</ul>

<br>
