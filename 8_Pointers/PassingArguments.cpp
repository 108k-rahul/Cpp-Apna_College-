#include<iostream>
using namespace std;

void changeA(int param){
    param = 20;
    cout<< "change A = "<< param<< endl;
}

void changeB(int *ptr){
    *ptr = 20;
    cout<<"Change B = "<< *ptr<< endl;
}

int main(){
    int a = 10;
    int b = 10;

    changeA(a);    
    cout<< "a = "<< a<< endl<< endl;

    changeB(&b);
    cout<< "b = "<< b<< endl;
    return 0;
}