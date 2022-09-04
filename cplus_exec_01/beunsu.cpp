//
//  beunsu.cpp
//  cplus_exec_01
//
//  Created by YeByungmun on 2022/05/25.
//

#include "beunsu.hpp"
#include <stdio.h>  // 프로그램에 stdio.h 를 포함해라...아래 printf 함수를 사용하기 위해...

int main(){    //  C 언어에서 ( ) 는 함수를 뜻한다. 어떤 값을 넣어주면 명령에 의해 다른 새로운 값을 내보낸댜.
    int a = 2;
    int b = 3;
    int hap = a + b;
    
    printf("%d + %d = %d\n", a , b , a+b);  // \n 은 개행문자
    printf("%d + %d = %d\n" , a, b, hap);   // 위와 같은 결과(hap 이라는 변수를 만들어 사용)
    printf("%.2f\n", 3.141592);  // .2f  는 소숫점 둘째 자리까지 반올림하여 출력
    
    printf("%g\n", 3.87234566);
    printf("%c %c %c\n", 'a', 'b', 'c');  //  %c 문자 출력 (알파벳, 숫자, 몇몇 기호, \n)
    printf("%s\n", "안녕하세요");  // %s 는 문자열(문자들의 열거) 출력
  
    
}
