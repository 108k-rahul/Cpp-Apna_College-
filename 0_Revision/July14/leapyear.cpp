#include<iostream>
using namespace std;

/*Leap Year : exactly divisible by 4 except no's ending with 00(century years).
A century year is a leap year if it is perfectly divisible by 400*/

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    if(n%400 == 0){
        cout<<"Leap year"<< endl;
    }else if (n%100 == 0){
        cout<<"Not a leap year."<< endl;
    }else if(n%4 == 0){
        cout<<"Leap Year"<< endl;
    }else{
        cout<<"Not a leap year"<< endl;    
    }    
    return 0;
}