#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n , dau , cuoi, m  , mu,count = 0  ; 
    scanf("%d" , &n) ; m=n ; 
    while(m>10){ //1234 --> count = 3
        count++  ; 
        m/=10 ; 
    }
    int check = pow(10 , count) ; 
    dau = n/check ; 
  //  printf("%d\n" , dau) ;
    cuoi = n%10 ; 
 //   printf("%d\n" , cuoi) ;
    int du = n%check ; 
    n = n/check  ; 
  //  printf("%d\n" , n) ;
    n = du + check*cuoi ; 
//    printf("%d\n" , n) ;
    n/=10 ; 
 //   printf("%d\n" , n) ;
    n = n*10  +dau  ; 
    printf("%d\n" , n) ;  

}