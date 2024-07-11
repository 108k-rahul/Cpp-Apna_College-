#include<iostream>
using namespace std;

int factorial(int n);
int binomial(int n, int r);

int main(){
    int n,r;
    cout<<"Enter value of 'n': ";
    cin>> n;
    cout<<"Enter value of 'r': ";
    cin>> r;

    int result = binomial(n,r);
    cout<<"Binomial result: " << result<< endl;
    return 0;
}

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int binomial(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1/(val2*val3);
    return result;
}