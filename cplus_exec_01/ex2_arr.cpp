#include<stdio.h>


//  배열의 선언과 for문을 이용한 초기화


int main(){
    int arr[]= { 3,1,5,4,7,2,3,4};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("\n");
}