#include<iostream>
using namespace std;

int mani(){
    int i,n;
    cout<<"Enter first number: ";
    cin>>i;
    cout<<"Enter last number: ";
    cin>>n;

    do{
        cout<< i<< " ";
        i++;
    }while(i<=n);
    return 0;
}