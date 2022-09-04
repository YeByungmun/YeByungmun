// call-by-value  값만 넘겨줌
// call-by-reference 포인터 사용하여


//  call_by_ex01.cpp
//  cplus_exec_01
//
//  Created by YeByungmun on 2022/06/01.
//

#include "call_by_ex01.hpp"
#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y =tmp;
}


int maindd(){
    int a, b;   //  두 값을 교환해 보자
    
    scanf("%d%d", &a, &b);
    
    swap(a, b);
    
    printf("a = %d, b = %d\n", a, b);
}
