#include<iostream>
using namespace std;

int main(){
    int num, lastdigit, sum;

    cout<< "Number: ";
    cin>> num;
    sum = 0;
    while(num>0){
        lastdigit = num%10;
        sum+=lastdigit;
        num/=10;
    }
    cout<< "Sum of digits = " << sum;
    return 0;
}