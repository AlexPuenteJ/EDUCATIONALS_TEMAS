#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cant=1;
        if(s[0]=='0'){
            cant=0;

        }else{
            if(s[0]=='?'){
                cant=9;
             }
            for(int i=1;i<=4;i++){
                if(s[i]=='?'){
                    cant=cant*10;
                }
            }
        }        
    cout<<cant<<"\n";
    }  
}