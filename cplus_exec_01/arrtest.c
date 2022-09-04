
// 짝수의 개수

#include<stdio.h>

int main(){
    int n;
    int arr[100];
  
    printf("입력할 숫자의 개수 입력 : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;   //  카운트 할 변수 선언 및 초기화
    for (int i = 0 ; i < n; i++){
        if (arr[i] % 2 == 0){
              cnt++;
        }
    };
    printf("%d\n",cnt);
}