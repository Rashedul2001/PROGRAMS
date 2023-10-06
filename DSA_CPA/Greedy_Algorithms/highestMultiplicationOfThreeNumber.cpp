#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n); 

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<' ';
    // }


    int firstMax=0,secondMax=0;

    firstMax=arr[0]*arr[1]*arr[n-1];
    secondMax=arr[n-1]*arr[n-2]*arr[n-3];
    cout<<max(firstMax,secondMax)<<endl;





    return 0;
}