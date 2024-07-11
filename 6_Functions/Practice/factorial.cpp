#include<iostream>
using namespace std;

int factorial(int a);

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;

    int fact = factorial(n);
    cout<< "Factorial: "<< fact<<endl;
    return 0;
}

int factorial(int a){
    int fact = 1;
    for(int i=a; i>=1; i--){
        fact*=i;
    }
    return fact;
}