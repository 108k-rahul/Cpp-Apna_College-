#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100] = "xyz";
    // str1 = "dafd";

    //cpy
    cout<<"str1: "<<strcpy(str1, "abc")<<endl;

    //cat
    cout<<strcat(str1,str2)<<endl;

    //cmp (compares by ASCII value)
    cout<<strcmp(str1,str1)<<endl; // 'a' == 'a'
    cout<<strcmp(str1,str2)<<endl; //'a' < 'x'
    cout<<strcmp(str2,str1)<<endl; // 'x' > 'a'
    return 0;
}