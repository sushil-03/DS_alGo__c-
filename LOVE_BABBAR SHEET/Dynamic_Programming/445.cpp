// Longest Smallest Subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3, -4, 2, -3, -1, 7, -5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int csum=arr[0];
    int sum=arr[0];
    for(int i=1;i<n;i++){
        if(sum<0){
            sum+=arr[i];
        }else{
            sum=arr[i];
        }
        csum=min(csum,sum);
    }
    cout<<csum<<endl;
}