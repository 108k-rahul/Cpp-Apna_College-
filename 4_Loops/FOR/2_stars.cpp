#include<iostream>
using namespace std;

int main(){;
    int i,j;
    int n,m;
    cout<<"Horizontal: ";
    cin>> n;
    cout<< "Vertical: ";
    cin>> m;

    // for(j=0; j<5; j++){
    //     for(i=0; i<5; i++){
    //         cout<<"* ";
    // }
    // cout<<endl;
    // }

    for(j=0; j<n; j++){
        for(i=0; i<m; i++){
            cout<<"* ";
    }
    cout<<endl;
    }

    return 0;
}