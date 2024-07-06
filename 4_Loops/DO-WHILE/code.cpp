#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter first number: ";
    cin>>i;
    cout<<"Enter last number: ";
    cin>>n;

    do{
        cout<< i<<endl;
        i++;
    }while(i<=n);
    return 0;
}