#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int n){
    int le  = 0 , chan = 0 ; 
    while(n>0){
        if( (n%10)%2 == 0 ) chan++ ; 
        else le++ ; 
        n/=10 ; 
    }
    if(chan == le) return 1  ; 
    else return 0 ; 
}
main(){
    int n ; scanf("%d" , &n) ; 
    int i ,j ; 
    int max  = 0 ;
    int min = pow(10 , n-1) ; 
    for(i=1  ; i<=n ; i++){
        max = max*10 + 9  ;
    }
    i =  1; int k=0 ; 
    for( i=min ; i<=max ; i++){
        if(check(i) == 1 ) {
         
                printf("%d ",i) ; 
                k++ ; 
            
            if(k==10) {printf("\n") ; k=0 ;  }
            
        }
    }
    
}