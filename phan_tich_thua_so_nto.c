#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int t; scanf("%d" , &t) ; 
    while(t--){
        int n; scanf("%d",&n) ; 
        int m = n ; 
        int i=2 ; 
        while(i<=n){
            while(n%i == 0) {
                printf("%d ",i) ; 
                n/=i; 
            }
            i++ ; 
        }
        printf("\n") ; 
    }
}