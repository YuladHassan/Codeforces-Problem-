#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string b;
    cin>>b;
    for(int i=0;i<b.length()-1;i+=2){ // every odd digit will our output
        cout<<b[i];
    }
    cout<<b[b.length()-1]<<endl;

    }
   
    return 0;
}