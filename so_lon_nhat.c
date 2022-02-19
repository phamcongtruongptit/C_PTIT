#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; 
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        int n , max , i ; 
        scanf("%d" , &n) ; 
        for(i=0 ; i<n ; i++) {
            scanf("%d" , &M[i]) ; 
            if(i==0) max = M[i]  ; 
            else {
                if(max < M[i] ) max = M[i] ; 
            }
        }
        printf("%d\n" , max) ; 
        for(i=0 ; i<n ; i++) 
            if(M[i] == max) printf("%d " , i) ; 
        printf("\n") ; 
	} 
}