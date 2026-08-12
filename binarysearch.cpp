
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
    cout<<"enter element to find";
    cin>>ele;
    int low=0;
    int high=n-1;
    int found=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==ele){
            found=mid;
            break;
        }
        else if(arr[mid]>ele){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(found!=-1){
        cout<<"found at index"<<found;
    }
    else{
        cout<<"not found";
    }

    return 0;
}
