#include<iostream>
#include<string>
using namespace std;

int main(){
    string strr;
    getline(cin, strr, '$'); //delimiter is optional.
    cout<<strr<<endl;
    cout<<strr[0]<<endl;
    cout<<strr[2]<<endl;
    cout<<strr[4]<<endl;
    return 0;
}