#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Hello World\n";
    cout<<"Apna College-\n"<<"-is for programmers.\n";
    cout<<"Apna College"<<endl<<endl;


    int age = 25; // 4Bytes
    char grade = 'A'; // 1Byte
    bool isAdult = true; // 1Byte
    float cgpa = 8.9; // 4Bytes
    double price = 99.99; // 8Bytes


    cout<<"size if int = "<<sizeof(int)<<" bytes"<<endl;
    cout<<"size if char = "<<sizeof(grade)<<" byte"<<endl;
    cout<<"size if bool = "<<sizeof(isAdult)<<" byte"<<endl;
    cout<<"size if float = "<<sizeof(cgpa)<<" bytes"<<endl;
    cout<<"size if double = "<<sizeof(price)<<" bytes"<<endl;



    //NOTE: we have to #include<iomanip> to set precision.

    float PI = 3.14159265359;
    double PI2 = 3.14159265359;

    cout<<setprecision(12)<<"float: "<<PI<<endl;
    cout<<setprecision(12)<<"double: "<<PI2<<endl;
    return 0;
}