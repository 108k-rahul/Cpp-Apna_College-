#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n){
    for(int i=0; i<n; i++){
        int minIndx = i;
        //loop to find min:
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndx]){
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
    print(arr, n);
}

int main(){
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    return 0;
}