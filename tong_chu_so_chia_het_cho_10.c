    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    int tong(int n){
        int tong = 0 ; 
        int i , j ; 
        while(n >  0 ){
            tong += (n%10) ; 
            n/=10 ; 
        }
        return tong ; 
    }
    main(){
        int t ; scanf("%d" , &t ); 
        while(t--){
            int  n   ; scanf("%d" , &n) ; 
            printf((tong(n) % 10 ==0 )?"YES\n":"NO\n") ; 
        } 
    }