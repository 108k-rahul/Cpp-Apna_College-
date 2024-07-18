#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr1 = &a;
    cout<<"a: "<< *ptr1<<endl;

    *ptr1 = 25;   // => *ptr is a modifiable value.
    cout<<"*ptr: "<< *ptr1<<endl;
//BUT,
    int arr[5];
    cout<<arr<<endl;

    int y = 10;
    // arr = &y;   => this is not possible. arr is not a modifiable value. i.e: it will always point to it's 0th position.
    return 0;
}