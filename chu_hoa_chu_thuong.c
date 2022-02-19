#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int t; scanf("%d" , &t) ; 
    while(t--){
        scanf("\n");
        char c ; scanf("%c",&c) ; 
        int k = (int)c ; 
        if(k<92){
            printf("%c\n" , (char)(k+32)) ; 
        }
        else {
            printf("%c\n", (char)(k-32)) ; 
        }
    }
}
