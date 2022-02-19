#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] , n ; 
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("%d" , &n)  ; int i ,j ; 
        for(i=1 ; i<=n ; i++) scanf("%d" , &M[i]) ; 
        int count = 0 ; 
        for(i=2 ; i<=n ; i++){
            int check = 1  ; 
            for(j=i-1 ; j>=1 ; j--){
                if(M[i]<M[j]) {
                    check =  0  ; break ; 
                }
            } 
            if(check) count ++ ; 
        }
        printf("%d\n" , count + 1) ; 
	} 
}