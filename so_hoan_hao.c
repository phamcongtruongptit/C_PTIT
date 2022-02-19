#include<stdio.h>
int main(){
    int a, i; 
    scanf("%d" , &a) ; 
    int sum = 0 ; 
    for( i=1 ; i<=a-1 ; i++){
        if(a%i == 0) {
            sum+=i ; 
        } 
    }
    if(sum == a){
        printf("1") ; 
    }
    else {
        printf("0") ; 
    }
    return 0 ; 
}
