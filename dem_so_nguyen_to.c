#include<stdio.h>
#include<string.h>
#include<math.h>
int a , b ; 
int checknto(int  n){
    if(n<=1 ) return 0;
    int i=2 ; 
    for(i=2 ;i<=sqrt(n);i++){
        if(n%i == 0){ return 0;}

    }
    return 1;
}
int checkcsnto(int n){
    while(n>0){ 
        int  k = n%10 ; 
        if(k==0||k==1||k==4||k==6||k==8||k==9) return 0  ; 
        n/=10 ; 
    }
    return 1 ; 

}
int tinh(){
    int count = 0 ;
    int i = a ;
    while(i<=b){
        if(checknto(i)) {
            if(checkcsnto(i)) {
                count++;
            }
        }
        i++ ; 
    }
    return count ; 
}
main(){
    
    int t ; scanf("%d",&t);
    while(t--){
        scanf("%d%d" , &a , &b) ; 
        printf("%d\n" , tinh()) ; 
    }
}