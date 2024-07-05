// Build calculator using "Switch";

#include<iostream>
using namespace std;

int main(){
    char operation;
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter which operation to perform(+,-,*,/): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> b;

    switch(operation){
        case '+': cout << a + b << endl;
        break;
        case '-': cout << a - b << endl;
        break;
        case '*': cout << a * b << endl;
        break;
        case '/': cout << a / b << endl;
        break;
        default: cout << "Invalid operation.";
    }

    return 0;
}