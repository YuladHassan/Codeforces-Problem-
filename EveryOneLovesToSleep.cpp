#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,H,M,h,m;
    cin>>n;
    int sh=0;
    
    while(n--){
        cin>>a>>H>>M;
       for(int i=0;i<a;i++){
        cin>>h>>m;
        sh=60*h+m;
        int SH=sh;
        if(SH>sh){
            int min=sh;
        }
        
        
       }
       cout<<min<<endl;
    }
    return 0;
}