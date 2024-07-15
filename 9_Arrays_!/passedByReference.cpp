#include<iostream>
using namespace std;

void funct1(int arr[]){
    arr[0] = 99;
}

void funct2(int *ptr){
    ptr[0] = 100;
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    funct1(arr);
    funct2(arr); 
//passing array name is equivalent to passing the pointer.
// => funct1 == funct2

    cout<<arr[0]<<endl;
    return 0;
}