//
//  add_two_use_function.cpp
//  cplus_exec_01
//
//  Created by YeByungmun on 2022/05/25.
//

#include "add_two_use_function.hpp"
#include "iostream"

int add(int x, int y){
    return x + y;
}

int main(){
    
    int a;
    int b;
    
    std::cout << "First No?" ;
    std::cin >> a;
    
    std::cout << "Second No?" ;
    std::cin >> b;
    
    std::cout << "결과값 :  " << add(a,b) << "\n";
    return 0;
}
