    #include<stdio.h>
#include<string.h>
#include<math.h>
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        int n ; scanf("%d" , &n) ; 
        int chan = 0 , le= 0 ; 
        while(n>0){
            int i = n%10 ; 
            if(i%2 == 0)chan++ ; 
            else le++ ; 
            n/=10 ; 
        }
        printf("%d %d\n" , le , chan) ; 
	} 
}