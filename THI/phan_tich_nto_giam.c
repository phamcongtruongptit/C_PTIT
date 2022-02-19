#include<stdio.h>
#include<string.h>
#include<math.h>
main(){

        int n; scanf("%d",&n) ; 
        int kq[1000] ;
        int check = 1 ;   
        int m = n ; 
        int i=2 ; 
        while(i<=n){
            while(n%i == 0) {
                kq[check] = i ; check++;
                n/=i; 
            }
            i++ ; 
        }

        for(i = check -1  ; i>= 1; i--){
            if (i == 1){
                printf("%d",kq[i]) ; 
            } else 
            printf("%dx",kq[i]) ; 
        }

}