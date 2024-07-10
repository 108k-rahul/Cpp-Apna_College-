#include<iostream>
using namespace std;

int iseven(int a);

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;

    int check = iseven(n);
    cout<< check<< endl;
    if(check==1){
        cout<<"Even number";
    }else{
        cout<<"Odd number";
    }
    return 0;
}

//even -> true,  odd -> false
int iseven(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}