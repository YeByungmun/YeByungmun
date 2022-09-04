#include "iostream"

int add(int x, int y){
    return x + y;
}

int main(){
    
    int a;
    int b;
    
    std::cout << "첫번째 숫자?" ;
    std::cin >> a;
    
    std::cout << "두번째 숫자?" ;
    std::cin >> b;
    
    std::cout << "결과값 :  " << add(a,b) << "\n";
    return 0;
}
