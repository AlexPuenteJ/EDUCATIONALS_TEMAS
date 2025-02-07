#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long cont=1;
    for(int i=3;i<n;i++){
        if(a[2]==a[i]){
            cont++;
        }
    }
    long long ans=1;
    if(a[0]==a[2]){
        ans=(cont+2)*(cont+1)*cont/6;
    }else{
        if(a[1]==a[2]){
            ans=(cont+1)*cont/2;
        }else{
            if(a[1]==a[0]){
                ans=cont;
            }else{
                ans=cont;
            }
        }
    }
    cout<<ans<<"\n";
}