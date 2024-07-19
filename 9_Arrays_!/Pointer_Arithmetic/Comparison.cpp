#include<iostream>
using namespace std;

// (==, <, <=, >, >=)

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr1 = arr;

    int *ptr2 = ptr1 + 3;

    cout<<(ptr2 > ptr1)<< endl; //True
    cout<<(ptr2 < ptr1)<< endl; //False

    cout<<(ptr1 == arr)<< endl; //True
}