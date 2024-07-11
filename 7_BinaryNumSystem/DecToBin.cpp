#include<iostream>
using namespace std;


void DecToBin(int decNum){
    int n = decNum;
    int pow = 1; //10^0 10^1 10^2...
    int binNum = 0;

    while(n>0){
        int rem = n % 2;
        binNum += rem * pow;
        n/=2;
        pow*=10;
    }
    cout<<"Binary of "<<decNum<< " is " <<binNum<<"."<< endl;
}


int main(){
    int n;
    cout<<"Enter Decimal Number: ";
    cin>>n;
    DecToBin(n);
    return 0;
}