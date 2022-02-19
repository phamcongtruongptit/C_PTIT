#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    char s[1000] ; 
    gets(s) ; 
    int i ; 
    for(i=0 ; i<strlen(s) ; i++){
        if(s[i] >= 'a' && s[i] <= 'z') s[i]= (char)((int)s[i] - 32); 
    }
    puts(s) ; 
}