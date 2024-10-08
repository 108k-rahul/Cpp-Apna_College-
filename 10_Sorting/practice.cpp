#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    print(arr,n);
}

void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int minIndx = i;
        for(int j=i+i; j<n; j++){
            if(arr[j] < arr[minIndx]){
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
    print(arr,n);
}

int main(){
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    selectionSort(arr,n);
    return 0;
}