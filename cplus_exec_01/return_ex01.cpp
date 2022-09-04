//
//  return_ex01.cpp
//  cplus_exec_01
//
//  Created by YeByungmun on 2022/06/01.
//

#include "return_ex01.hpp"
#include <iostream>

// 2개의 매개변수(정수)의 합을 반환

int plus(int a, int b){ // cpp 에서는 main() 함수 이전에 함수를 먼저 선언해 주어야 한다.
    return a + b;        // void가 아닌 함수는 반드시 return 이 있어야 에러가 나지 않는다.
                        
}

int noMeaning(){
    printf("first\n");
    return 1;               // 함수는 return 을 만나는 순간 종료된다.
    printf("second\n");
    return 2;
}


int main() {
    int sum = plus(3, 4) + 2;  // plus 함수를 매개변수를 넣어 호출하면 저 위 a에 3, b에 4가 들어가서 a+b 즉, 3+4를 계산하여 7이 되고
                           // return에 의하여 plus(3,4) 에 7을 돌려준다.
    printf("%d\n", sum);
    
    return 0;    //  main함수만 return 생략 가능하다.
}
