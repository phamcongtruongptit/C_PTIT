#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    long long m , n  ; 
    scanf("%lld%lld" , &m , &n) ; 
    if(m<=0) m=1 ; 
    long long min = sqrt(m) , max = sqrt(n) ;
    min = (min*min == m)?min:min+1 ;  
    printf("%lld\n",max-min+1) ; 
    while(min<=max){
        printf("%lld\n", min*min) ; 
        min++ ; 
    }
    
}