#include<stdio.h>
#include<string.h>
#include<math.h>
int UNCL(int a , int b) { 
    while(a!=b){
        if(a>b) a-=b ; 
        else b-=a ; 
    }
    return a ; 
}
int check(int a , int b){
    if(UNCL(a , b) == 1  ) return 1 ; 
    else return 0 ; 
}
main(){
    int a , b ; scanf("%d%d" , &a , &b) ; 
    int i , j ; 
    for(i = a ; i<=b ; i++){
        for(j=i ; j<=b ; j++){
            if(i<j && check(i,j)){
                printf("(%d,%d)\n" , i , j) ; 
            }
        }
    }
}