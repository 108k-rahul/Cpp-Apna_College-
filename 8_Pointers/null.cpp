#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout<<"Adderss of a null pointer: " <<ptr<< endl;

    cout<< *ptr << "\n"; //Segmentation Fault
//Executin of code will stop when it encounters a Segentation Fault;

    cout<<"Bye" <<endl;
    return 0;
}