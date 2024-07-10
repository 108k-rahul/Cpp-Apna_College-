#include<iostream>
using namespace std;

int sum(int a,int b);
int sum(double a,double b);
int sum(int a, int b, int c);

int main(){
    sum(4,3);
    sum(4.5,3.5);
    sum(1,2,3);
    return 0;
}

int sum(int a,int b){
    cout<< (a+b) << endl;
    return a+b;
}

int sum(double a,double b){
    cout<< (a+b) << endl;
    return a+b;
}

int sum(int a,int b, int c){
    cout<< (a+b+c) << endl;
    return a+b+c;
}