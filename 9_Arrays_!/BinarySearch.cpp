#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start = 0, end = n-1;

    while(start<=end){  //we take '<=' in case there is only one element left in the array. i.e: start = end.
        int mid = (start+end)/2;

        if(arr[mid] == key){
            return mid; //key found
        }else if(arr[mid] < key){
            start = mid+1; //2nd half
        }else{
            end = mid-1; //1st half
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key = 12;
    
    cout<< binarySearch(arr, n, key)<< endl;

    auto it = find(arr, arr+n, key);

    if(it!= arr+1){
        cout<<"array at index: "<<it-arr;
    }else{
        cout<<"nof found";
    }
    return 0;
}