#include<iostream>
using namespace std;

//Note: '+' b/w pointers is an invalid operation. 
//         For '-', both pointers should be of same type.

/* int main(){
    int a = 5;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;
    cout<< ptr2<< endl;
    cout<< ptr1<< endl;

    cout<< ptr2 - ptr1<< endl;  //How many spaces bw them
    return 0;
}*/

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr1 = arr; // 0th position
    int *ptr2 = ptr1 + 3; // 4th position

    cout<< *ptr2<< endl;
    cout<< *ptr1<< endl;

    cout<< ptr2 - ptr1<< endl;
}