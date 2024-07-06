#include<iostream>
#include<cmath>  //To include under-root 'n'.
using namespace std;

// int main(){
//     int i,n;
//     cout<<"Enter number: ";
//     cin>>n;
//     bool isPrime = true;

//     for(i=2; i<=n-1; i++){
//         if(n%i==0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true){
//         cout<<"Prime no.";
//     }else{
//         cout<<"Non Prime no.";
//     }
//     return 0;
// }

// OR :-

int main(){
    int i,n;
    cout<<"Enter number: ";
    cin>>n;
    bool isPrime = true;

    for(i=2; i<=sqrt(n); i++){   // sqrt(n) means the iteration will stop when the repetation of the multiple starts.   squrt(n) = peek point.
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"Prime no.";
    }else{
        cout<<"Non Prime no.";
    }
    return 0;
}