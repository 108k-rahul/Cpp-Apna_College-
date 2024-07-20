#include<iostream>
using namespace std;

void printSubarray(int *arr, int n){
    for(int start=0; start<n; start++){     // n-times
        for(int end=start; end<n; end++){   // n-times
            // cout<<"("<< start<<","<< end<< ") ";
            for(int i=start; i<=end; i++){  // n-times
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}

// => TIME complexity = O(n^3)

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    printSubarray(arr, n);
    return 0;
}