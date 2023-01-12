#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1 && y==1){
            c++;
        }
        else if(x==1 && z==1)
        {
               c++;
        }
        else if(y==1 && z==1)
        {
               c++;
        }
        else{
            c=c;
        }
     }
    
    cout<<c<<endl;
    return 0;
}