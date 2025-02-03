#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,m;
        cin>>a>>b>>c>>m;
        int maxi=max(a,max(b,c));
        if((m>a+b+c-3) or (2*maxi>a+b+c+1+m)){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}