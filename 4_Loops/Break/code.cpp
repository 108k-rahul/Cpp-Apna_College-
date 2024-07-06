#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=1; i>0; i++){
        cout<<"Enter number: ";
        cin>> i;
        if(i%10==0){
            break;
        }
    }
    cout<<"Entered number is a multiple of 10.";
    return 0;
}