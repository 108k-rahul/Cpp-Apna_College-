#include<iostream>
using namespace std;

bool isprime(int n);
void allprime(int n);

int main(){
    allprime(13);
    return 0;
}

bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void allprime(int n){
    //all primes from 2 to n.
    for(int i=2; i<=n; i++){
        if(isprime(i)){
            cout<< i<< " ";
        }
    }
    cout<< endl;
}