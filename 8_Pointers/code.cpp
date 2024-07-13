#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr1 = &a;
    float b = 3.14;
    float *ptr2 = &b;

    cout<< &a << " = "<< ptr1<< endl;
    cout<< &b << " = "<< ptr2<< endl;

    cout<<"Sie of integer pointer = " << sizeof(ptr1)<< endl;
    cout<<"Sie of float pointer = " << sizeof(ptr2)<< endl;

    //De-Refrencing Operator
    cout<<"a = " << *ptr1<< endl;
    cout<<"b = " << *ptr2<< endl;
    return 0;
}