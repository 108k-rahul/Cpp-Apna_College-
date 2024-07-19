#include<iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i=0; i<n; i++){
        //Aam zindgi
        /*cout<< *ptr<< endl;
        *ptr += 1;*/   

       // Mentos Zindgi:)
       cout<< *(ptr + i)<< endl;

    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    printArr(arr, n);
    return 0;
}