#include <iostream>
using namespace std;
int main() {
    int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int ele;
     int found=-1;
     cout<<"enter element to find";
     cin>>ele;
     for(int i=0;i<n;i++){
        if(arr[i]==ele){
            found=i;
            break;
        }
     }
     if(found!=-1){
        cout<<"element found at"<<found;
     }
     else{
        cout<<"not found";
     }
    return 0;
}
