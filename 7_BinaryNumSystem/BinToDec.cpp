#include<iostream>
using namespace std;

void BinToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; //2^0 2^1 2^2...

    while(n>0){
        int lastdigit = n%10;
        decNum += lastdigit * pow;
        pow*=2;
        n/=10;
    }
    cout<<"Decimal of "<<binNum<<" is " <<decNum<<"."<< endl;
}


int main(){
    int n;
    cout<<"Enter binary number: ";
    cin>> n;
    BinToDec(n);
    return 0;
}