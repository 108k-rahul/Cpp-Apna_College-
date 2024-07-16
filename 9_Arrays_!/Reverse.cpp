#include<iostream>
using namespace std;


// Method1:- (Using extra space)
/*void printcopyArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
}

int main(){

    int arr[] = {5,4,3,9,2,1};
    int n = sizeof(arr)/sizeof(int);

    int copyArr[n];
    for(int i=0; i<n; i++){   // Making a copy array.
        int j = n-i-1;          //Copy array will contain elements in reverse order.
        copyArr[i] = arr[j];
    }

    for(int i=0; i<n; i++){
        arr[i] = copyArr[i];
    }

    printcopyArr(arr, n);

    return 0;
}
*/

// Method 2:- (without using extra space :)
int printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,4,3,9,2,1};
    int n = sizeof(arr)/sizeof(int);

    int start = 0, end = n-1;

    while(start < end){
        //swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    printArr(arr, n);
    return 0;
}