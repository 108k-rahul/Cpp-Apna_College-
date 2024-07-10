#include<iostream>
using namespace std;

int sum(int a, int b);
int diff(int a, int b = 1);

// NOTE: First parameter cannot be a default parameter.

int main(){
    int s = sum(2,4);  //2 & 4 are arguments.
    int d = diff(6); //2 & 4 are arguments.
    cout << "sum: "<< s<< endl;
    cout << "diff: "<< d<< endl;
    return 0;
}

int sum(int a, int b){  //a & b are parameters.
    int sum = a+b;
    return sum;
}

int diff(int a, int b){  //a & b are parameters.
    int diff = a-b;
    return diff;
}
