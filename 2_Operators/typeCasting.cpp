#include<iostream>
using namespace std;

int main(){
    // IMPLICIT
    cout <<"A + 1 = "<< ('A'+1) << endl;
    cout <<"B + 1 = "<< ('B'+1) << endl;

    // EXPLICIT
    cout <<"A = "<< (int)('A') << endl;

    float PI = 3.14;
    cout <<"int PI = "<< (int)(PI) << endl;

    cout <<"float 10/3 = "<< ((float)10/3) << endl;

    cout <<"char A + 1 = "<< (char)('A' + 1) << endl;
    return 0;
}