#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
 
    for (int i = 0;i < n;i++)
    {
        int cur = 1;
        for (int j = i - 1;j >= 0 && a[j] <= a[j + 1];j--) cur++; //checking the left side
        for (int j = i + 1;j < n && a[j] <= a[j - 1];j++) cur++; //checking the right side
        ans = max (ans, cur);
    }
    cout << ans;
    return 0;
}