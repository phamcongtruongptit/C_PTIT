#include<stdio.h>
#include<string.h>
#include<math.h>
int n; 
int check4andsum(int n){
    int sum = 0 ; 
    while(n>0){
        int k = n%10  ; 
        if(k==4) return 1 ; 
        else sum+= k ; 
        n/=10 ; 
    }
    return sum ; 
}
int checkthuannghich(int n){
    int m  = n ; 
    int check  = 0 ; 
    while(n>0){
        check = check*10 + n%10 ; 
        n/=10 ; 
    }
    if(check == m) return 1 ; 
    else return 0 ; 
}
main(){
    
    int t ; scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int i  = pow(10 , n-1) ; 
        while(i< pow(10 , n) ){
            if( check4andsum(i)%10 == 0 && checkthuannghich(i)) {
                printf("%d " , i) ; 
            }
            i++ ; 
        }
        printf("\n") ; 
    }
}