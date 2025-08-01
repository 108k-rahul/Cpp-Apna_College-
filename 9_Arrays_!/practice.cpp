#include<bits/stdc++.h>
using namespace std;

void change(int arr[], int size){
    cout<<"change function."<<endl;
    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];
    }
}
int main(){
//     int n;
//     cin>>n;
//     int marks[n];
// //OR
//     int m;
//     cin>>m;
//     vector<int> markss(n); //dynamically sized array


    int arr[] = {8,2,9,6,4,1,5,7,3};
    int size = sizeof(arr)/sizeof(int);

    change(arr,size);

    cout<<"main function."<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start = arr[0];
    int end = arr[size-1];
    for(int i=start; i<end; i++){
        if(start <= end){
            swap(start,end);
        }
    }

    return 0;
}