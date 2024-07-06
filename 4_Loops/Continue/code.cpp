#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=1; i>0; i++){
        cout<<"Enter number: ";
        cin>> i;
        if(i%10==0){
            continue;
        }
        cout<< i<< endl;
    }
    return 0;
}