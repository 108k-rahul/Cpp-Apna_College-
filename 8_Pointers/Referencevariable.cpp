#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;

    b = 25;

    cout<<"b = "<< b<< endl;

    cout<<"a = " << a <<endl;
    return 0;
}