#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        if(w<=min(k1,k2)+abs(k1-k2)/2 and b<= min(n-k1,n-k2)+abs(k1-k2)/2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}