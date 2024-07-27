#include<iostream>
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
    selectionSort(arr, n);
    return 0;
}