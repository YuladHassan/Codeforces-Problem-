#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,sum=0;
    cin>>n>>h;
    
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>h){
            sum += 2;
        }
        else{
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}