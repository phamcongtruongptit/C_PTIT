#include<stdio.h>
#include<string.h>
#include<math.h>
int A[105] , B[105] ;
int a , b ,x;
main(){
	int t ; scanf("%d" , &t ); 
    int test =1 ; 
	while(test <=t){
        scanf("%d%d%d" , &a,&b,&x) ; 
        int i , j ; 
        for(i=0  ;i<a ; i++){
            scanf("%d" , &A[i]) ; 
        }
        for(i=1 ; i<=b ;i++) scanf("%d", &B[i]) ; 
        
        printf("Test %d:\n" , test) ; 
        for(i=0 ; i<a ; i++) {
            if(x == i){
                for(j=1 ; j<=b ;j++) printf("%d ", B[j]) ;
            } 
            printf("%d " ,A[i] ) ; 
        }
        if(x>=a) for(j=1 ; j<=b ;j++) printf("%d ", B[j]) ;

        
        printf("\n") ;
        test ++ ; 
	} 
}