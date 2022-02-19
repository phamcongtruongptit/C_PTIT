#include<stdio.h>
#include<string.h>
#include<math.h>
int checknto(int n){
    if(n<=1) return 0 ; 
    if(n==2) return 1; 
    int i ; 
    for(i=2 ; i<=sqrt(n) ; i++) {
        if(n%i == 0) return 0 ; 
    }
    return  1 ;
}
int checksodep(int n){
    int  i , j , check = 0   ; 
    for(i = 2 ;i <=n ; i++ ){
        if(n%i ==  0 && checknto(i) ){
        int k = i*i ; 
        if(n%k == 0) check = 1 ; 
        else return 0 ; 
    }
} 
    if(check == 1) return 1 ; 
    else return 0 ; 
}
main(){
    int  m , n ; scanf("%d%d" , &m , &n) ; 
    int max = (m>n)?m:n ; 
    int min = (m>n)?n:m ; 
    int i ; 
    for(i=min ; i<=max ; i++){
        if(checksodep(i) == 1 ) printf("%d " , i) ; 
    }
}