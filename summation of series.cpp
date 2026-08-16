
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , r;
   cout<<"enter n and r";
   cin>>n>>r;
   int sum=0;
   for(int i=0;i<=r;i++){
    sum=sum+pow(n,i);
   }
   cout<<"The sum is:"<<sum;
    return 0;
}
