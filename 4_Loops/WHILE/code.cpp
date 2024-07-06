#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<< "Enter First number: ";
    cin>> i;
    cout<< "Enter Last number: ";
    cin>> n;

    int sum = 0;
    while(i<=n){
        cout<< i<< " ";
        sum+=i;
        i++;
    }
    cout<< endl;
    cout<<"sum: " <<sum << endl;
    return 0;
}