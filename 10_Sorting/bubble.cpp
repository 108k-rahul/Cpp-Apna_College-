#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break; // => array is already sorted.
        }
        isSwap = false; // Reset isSwap for the next pass
    }
    print(arr, n); // Ensure print is called after sorting
}

int main(){
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    return 0;
}