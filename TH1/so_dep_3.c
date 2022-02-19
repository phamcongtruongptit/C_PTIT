#include<stdio.h>
#include<string.h>
#include<math.h>
int check(char s[]){
    int l = strlen(s) ; 
    int i ;
    for(i= 0 ; i<=l/2 ; i++){
        if((s[i]!=s[l-i-1]) ||( s[i]!='2' && s[i]!='3' && s[i]!='5' && s[i]!='7')){
            return 0 ; 
        }
    }

    return 1 ; 
}



main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("\n") ; 
        char s[1000]  ; 
        gets(s) ; 
        printf((check(s))?"YES\n":"NO\n") ; 
	} 
}