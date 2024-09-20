#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    print(arr, n);

    sort(arr,arr+n);
    print(arr,n);


    sort(arr,arr+n,greater<int>());
    print(arr,n);
    return 0;
}