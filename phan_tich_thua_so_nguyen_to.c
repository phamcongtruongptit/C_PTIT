#include<stdio.h>
void solve(int n){
    int i  = 2 ; int count = 0 ;
    while(n>1){
        count = 0 ; 
        while(n%i == 0){
            count++ ; 
            n/=i ; 
        }
        if(count !=0 ){
            printf("%d^%d "  ,  i , count) ; 
        if(n!=1) {  
            printf("* ") ; 
        }
        }
        i++ ; 
    }
}
int main()
{
    int t ; 
    scanf("%d" , &t);
    while(t--){
        int n ; 
        scanf("%d", &n) ; 
        printf("%d = " , n) ;
        solve(n) ;
        printf("\n") ; 
    }
    return 0;
}
