// Income tax calculator.

#include<iostream>
using namespace std;

int main(){
    int income;
    float tax;
    cout << "ENter income(in Lacks): " ;
    cin >> income;
    if(income < 5){
        cout << "0% tax";
        tax = 0;
    }
    else if(income >=5 && income <10){
        cout << "20% tax" << endl;
        tax = 0.2 * income;
    }
    else{
        cout << "30% tax" << endl;
        tax = 0.3 * income;
    }

    cout << "You will have to pay Rs." << (tax*100000) << " as tax." << endl;
    return 0;
}