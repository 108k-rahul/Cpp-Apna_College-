#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[5] = {1,2,3,4,5};

    // int n = (sizeof(arr)/sizeof(int));

    for(int i=0; i<n; i++){
        cout<<"Enter value "<<i+1<<": ";
        cin>> arr[i];
    }
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}