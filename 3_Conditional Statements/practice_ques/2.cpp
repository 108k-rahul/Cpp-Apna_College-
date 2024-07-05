// Largest of 3 numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if(a>=b && a>=c){
        cout << "Largest number is a = " << a << endl;
    }
    else if(b>=c){
        cout << "Largest number is b = " << b << endl;
    }
    else{
        cout << "Largest number is c = " << c << endl;
    }
    return 0;
}