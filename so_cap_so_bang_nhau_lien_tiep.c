#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; 
int n  , i   , j ; 
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("%d" , &n) ; 
        for(i=1 ;i<=n ; i++){
            scanf("%d" , &M[i]) ;
        }
        int count =  0 ; 
        for(i=1 ; i<n ; i++){
            if(M[i] == M[i+1] ) count ++ ; 
        }
        printf("%d\n" , count) ; 
	} 
}