#include<iostream>
using namespace std ; 
int M[100] ; int n ; 
void input() {
    cin>>n ; 
    for(int i=0 ; i<n ; i++) cin>>M[i] ; 
}
void solve() {
    input() ; 
    bool duong = false ; 
    int max = M[0] ; 
    for(int i=0 ; i<n ; i++) {
        if(M[i] > 0) duong = true ; 
        if(M[i] > max) max = M[i] ; 
    }
    if(duong == false) {
        cout<<max<<endl ; return ; 
    }
    int sum = 0 ; max = M[0] ; 
    for(int i=0 ; i<n ; i++) {
        if( (sum + M[i]) <0 ){
            sum = 0 ; 
            continue;  
        }
        sum+=M[i] ; 
        if(max < sum) max = sum ; 
    }
    cout<<max<<endl; 

}
main() {
    int t ; cin>>t ; 
    while(t--) solve() ; 
}