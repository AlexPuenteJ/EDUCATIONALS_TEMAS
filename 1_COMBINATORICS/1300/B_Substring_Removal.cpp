#include<bits/stdc++.h>
using namespace std;
int main(){
    int MOD=998244353;
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long cont1=1;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            cont1++;
        }else{
            break;
        }
    }
   long long cont2=1;
     for(int i=n;i>1;i--){
        if(s[i-1]==s[i-2]){
            cont2++;
        }else{
            break;
        }
    }
    if(s[0]==s[n-1]){
        if(cont1==n){
            cout<<(cont1*(cont1+1)/2)%MOD<<"\n";
        }else{
            cout<<(cont1+cont2+(cont1*cont2)%MOD+1)%MOD<<"\n";
        }
     //lol   
    }else{
        cout<<cont1+cont2+1<<"\n";
    }
}