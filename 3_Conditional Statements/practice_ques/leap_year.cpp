#include<iostream>
using namespace std;
typedef int myInt;

/* typedef keyword: in cpp is used for aliasing existing data types, user-defined data types, and pointers to a more meaningful name. 
Eg: typedef int myInt
This allows us to declare new integers using myInt, instead of int. */


int main(){
    myInt year;
    cout << "Enter year: ";
    cin >> year;

    if(year%400 == 0){
        cout << "Leap Year.";
    } 
    else if(year%100 == 0){
        cout << "Not a Leap Year.";
    } 
    else if(year%4 == 0){
        cout << "Leap Year.";
    } 
    else{
        cout << "Not a Leap Year.";
    } 
    return 0;
}