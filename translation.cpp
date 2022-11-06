#include<bits/stdc++.h>
using namespace std;
string s,n;
int Translation(){
    int len=s.length();
    int len1=n.length();
    for(int i=len-1,j=0;i>=0,j<len1;i--,j++){
        if(s[i]!=n[j]){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    
    cin>>s>>n;
    if(Translation()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   
    return 0;
}