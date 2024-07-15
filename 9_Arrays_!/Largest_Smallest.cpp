#include<iostream>
using namespace std;

void largestNo(int n);

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    largestNo(n);
    return 0;
}

void largestNo(int n){
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter value "<<i+1 <<" : ";
        cin>> arr[i];
    }
    
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < max){
            min = arr[i];
        }
    }

    cout<<"Largest number is "<<max <<endl;
    cout<<"Smallest number is "<<min <<endl;
}