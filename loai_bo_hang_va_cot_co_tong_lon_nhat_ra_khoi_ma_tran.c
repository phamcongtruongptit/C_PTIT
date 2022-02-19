#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105][105] , hloai,cloai , hang[100] , cot[100] , max  , h , c ; 
main(){
	int t, i , j , k , test =1 ; scanf("%d" , &t ); 
	while(test <= t){
        scanf("%d%d" , &h , &c) ; 
        for(i=1 ; i<=h;i++){
            int tong = 0 ; 
            for(j=1 ; j<=c ; j++){
                scanf("%d" , &M[i][j]) ; 
                tong += M[i][j] ; 
            }
            hang[i] = tong  ; 
            if(max < hang[i] ) max = hang[i] ; 
        }
        for(i=1 ; i<= h ; i++) {
            if (max == hang[i]){
                hloai = i ; break ; 
            }
        }
        max = 0 ; 
        for(j=1 ; j<=c ; j++){
            int tong = 0 ; 
            for(i=1 ;i<=h ; i++){
                if(i == hloai) continue ; 
                else {
                    tong+=M[i][j] ; 
                }
            }
            cot[j] = tong ; 
            if(max < cot[j]) max = cot[j] ; 
        }
        for(j=1 ; j<=c; j++){
            if(max == cot[j]) {
                cloai = j ; 
            }
        }

        printf("Test %d:\n" , test) ; 
        for(i=1 ; i<=h ; i++){
            for(j=1 ; j<=c ; j++){
                if(i==hloai || j==cloai) continue ; 
                else printf("%d " , M[i][j]) ; 
            }
            printf("\n") ; 
        }

        test++ ; 
	} 
}