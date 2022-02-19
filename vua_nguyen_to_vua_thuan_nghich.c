#include <stdio.h>
#include<math.h>
#include<string.h>
int a, b ; 
int checknguyento(int n){
    if(n<=1) return  0 ;
    int i ;  
    for(i=2;i<=sqrt(n) ; i++){
        if(n%i == 0) return  0 ; 
    }
    return 1 ;
}
int checkthuannghich(int n){
    int m  = n ; //
    int check = 0  ; // check
    while(n>0){
        check = check*10 + n%10 ; 
        n/=10 ; 
    }
    if(check == m ) return 1 ; 
    else return 0 ; 
}
void solve(){
    int ok = 0 ; 
    int x = a , y = b ;
    a = (x<y)?x:y ; 
    b = (x<y)?y:x ; 
    int i = a ; 
    int count = 0 ; 
    while(i<=b){
        if(checknguyento(i) && checkthuannghich(i)){
            printf("%d " , i ) ; 
            ok =1 ; 
            count ++ ; 
            if(count == 10){
                count = 0 ; 
                printf("\n") ; 
            }
        }
        i++ ; 
    }
    if(ok==1){
    printf("\n") ; 
    printf("\n") ; 

    } else {
    printf("\n") ; 

    }
}
int main(){
    int t ; 
    scanf("%d", &t) ; 
    while(t--){
        scanf("%d%d" , &a ,&b) ; 
        solve() ; 
    }
    return 0;
}
