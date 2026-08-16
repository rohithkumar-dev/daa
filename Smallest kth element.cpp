#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"enter which smallest element do you want";
    cin>>k;
    sort(v.begin(), v.end());
    cout<<v[k-1];
    return 0;
}
