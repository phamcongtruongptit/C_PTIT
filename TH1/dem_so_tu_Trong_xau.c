#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("\n") ; 
        char s[1000] ; 
        gets(s) ; 
        int i , count = 0 ; 
        for(i=1 ; i<strlen(s)-1 ; i++){
            if(s[i] == ' ' && s[i+1] != ' '){
                count++ ; 
            }
        } 
        printf("%d\n" , count +1) ; 
    }
}