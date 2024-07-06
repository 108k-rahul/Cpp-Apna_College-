#include<iostream>
using namespace std;

// Numbers from 'i' to 'n' and their sum.
int main(){
    int i,n;
    cout<< "Enter first number: ";
    cin>> i;
    cout<< "Enter last number: ";
    cin >> n;

    int sum = 0;
    for(i=i; i<=n; i++){
        cout<< i << " ";
        sum+=i;
    }
    cout<< endl;

    cout<< "sum: "<< sum<< endl;
    return 0;
}