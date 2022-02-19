#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
    char S[50];
    gets(S);
    int tmp=0  ; 
    int start=0 , end=strlen(S), hetho , i ;
    while(S[tmp]==' ') {
        tmp++;
        start++;
    }
    
    while(S[end-1]==' '){
        end--;
    }
    
    while(tmp<end){
        if(S[tmp]==' ') {
            hetho=tmp; 
            break;
        }
        tmp++;
    }

    for(i=tmp;i<end;i++){
        if(S[i-1]==' ' && S[i]!=' '){ 
            if(S[i]>=97 && S[i]<=122) {
            S[i]=S[i]-32;
        }
            printf("%c",S[i]);
            
        } else if(S[i-1]!=' ' && S[i]!=' ' && S[i+1]!=' '){ 
            if(S[i]>=65 && S[i]<=90) {
                S[i]=S[i]+32;
            }
            printf("%c",S[i]);
        }
        else if( S[i-1]!=' ' && S[i]!=' ' && S[i+1]==' '){
            if(S[i]>=65 && S[i]<=90){
                S[i]=S[i]+32;
            }
            if(i!=end-1) {
                printf("%c",S[i]);
                printf(" ");
            }
            else printf("%c",S[i]);
        }
    }

    printf(", ");

    for(i=start;i<hetho;i++){
        if(S[i]>=97 && S[i]<=122){
            S[i]=S[i]-32;
        }
        printf("%c",S[i]);
    }
}
main(){
    solve() ; 
}

