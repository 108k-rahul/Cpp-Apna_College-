#include<iostream>
using namespace std;


// //Q. Print digits in reverse order.
// int main(){
//     int n = 10829;
//     while(n>0){
//         int last_digit = n%10;
//         cout<< last_digit<< "  ";
//         n/=10;
//     }
//     cout<< endl;
//     return 0;
// }
// // NOTE: this is printing digit in reverse digit by digit not as a whole.


// Q. Reverse a given number and print the result.

int main(){
    int n = 10829;
    int result=0;
    while(n>0){
        int last_digit = n%10;
        result = (result*10 )+ last_digit;
        n = n/=10;
    }
    cout<< result<< endl;
}