#include<stdio.h>
#include<string.h>
#include<math.h>
int n ; 
int checknto(int n ){
    if(n<=1) return 0 ; 
    int i =2 ; 
    for(i=2 ; i<=sqrt(n); i++){
        if(n%i ==0) return 0 ;
    }
    return 1 ;
}
main(){
    int t ; scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int  i =2 ; 
        while(i<=n/2){
            if(checknto(i) && checknto(n-i) ){
                printf("%d %d " , i , n-i) ; 
            }
            i++ ; 
        }
        printf("\n");
    }
}