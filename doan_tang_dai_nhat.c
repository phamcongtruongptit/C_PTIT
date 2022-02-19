#include<stdio.h>
#include<string.h>
#include<math.h>

main(){
	int t,test =1 ; scanf("%d" , &t ); 
	while(test <= t){
        int n ; scanf("%d" , &n) ; 
        int M[105] , B[105] , D[105] ; 
        memset(D , 0 , sizeof(D)) ; 
        int i , j , k , max , count,check=1; 
        for(i=1 ; i<=n ; i++)scanf("%d" ,&M[i]) ;  
        D[check] = 1 ; B[1] = check ;  
        for(i=2 ; i<=n; i++){ // 2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12
            if(M[i] > M[i-1] ) {
                B[i] = check ; 
                D[check] ++  ; 
            } else{
                check++ ; 
                B[i] = check ; 
                D[check] ++  ; 
            }
        }
        // for(k=1 ; k<=n ; k++) printf("%d " , B[k]) ; printf("\n") ; 
        // for(k=1 ; k<=5 ; k++) printf("%d " , D[k]) ; 
        max = 0 ;
        int doan = 0 ; 
        for(i = 1 ; i<105; i++) 
            if(max < D[i]) max = D[i] ; 
        printf("Test %d:\n" , test) ; 
        printf("%d\n" , max) ; 
        for(i=1 ; i<105 ; i++) {
            if(D[i] == max) {
                for(j=1 ; j<=n ; j++){
                    if(B[j] == i ) printf("%d " , M[j]) ; 
                }
                printf("\n") ; 
            }
        }

        test++ ; 
	} 
}