#include<iostream>
using namespace std;

/* void READit(int nums[]){ //this funct can't calculate the size of array. Because it only knows about the starting point and not about the ending point.
// THAT'S WHY WE ALSO NEED TO POIVIDE SIZE OF THE ARRAY TO THE FUNCTION MANUALLY.
    cout<<"size of nums = " << sizeof(nums); //4, because nums is a pointer, not an array.
    // int n = sizeof(nums)/sizeof(int);
    // cout<<n<<endl;

    // for(int i=0; i<n; i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<<endl;
}*/

void printArr(int nums[], int n){
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(int);
    cout<<"size of array = " <<n<<endl;

    printArr(arr,n);
    return 0;
}