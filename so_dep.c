#include<stdio.h>
#include<string.h>
#include<math.h>
int F[30] ; 
void fibo(){
    int i ; 
    F[0] = 0 ; F[1] = 1 ;
    for( i=2; i<30 ; i++){
        F[i] = F[i-1] + F[i-2] ; 
    }
}
int tongchuso(int n){
    int tong = 0  ;
    while(n>0){
        tong+= (n%10) ; 
        n/=10; 
    }
    return tong ; 
}
int checknguyento(int n){
    if(n<=1) return 0 ; 
    if(n==2) return 1  ; 
    int i ;
    for(i=2 ; i<=sqrt(n) ; i++){
        if(n%i == 0) return 0 ; 
    }
    return 1; 
}
main(){
    int a  , b ; 
    scanf("%d%d", &a , &b) ; 
    int max = (a>b)?a:b ; 
    int min = (a<b)?a:b  ; 
    fibo() ; 
    int i,j ; 
    for(i = min ; i<=max; i++){
        if(checknguyento(i) == 1 ){
            int k = tongchuso(i) ;  
            for(j=0; j<30; j++){
                if(F[j] == k ){
                    printf("%d ", i) ; 
                    break ; 
                }
            }
        }
    }

}