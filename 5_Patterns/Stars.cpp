#include<iostream>
using namespace std;

int main(){
    int n = 4;
    cout<<"Enter number: ";
    cin>> n;

    // for(int i=1; i<=n; i++){             // i = 1 to n
    //     for(int j=1; j<=i; j++){            // j = 1 to i
    //         cout<< "*"<< " ";
    //     }
    //     cout<< endl;
    // }

    for(int i=1; i<=n; i++){                // i = 1 to n
        for(int j=1; j<=(n-i+1); j++){      // j = 1 to (n=i+1)
            cout<< "* ";
        }
        cout<< endl;
    }

    return 0;
}