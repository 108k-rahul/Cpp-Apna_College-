#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;

    cout<< aptr<< endl;
    aptr++; // +4bytes
    cout<< aptr<< endl;
    aptr--; // -4bytes
    cout<< aptr<< endl<< endl;


    char b = 'a';
    char *cptr = &b;
/*The line cout << static_cast<void*>(cptr) << endl; is a way to print the address stored in a char* pointer by casting it to a 'void*' */ 
/*By casting cptr to void*, you tell cout to treat the pointer as a generic pointer, which means it will print the memory address stored in the pointer instead of interpreting it as a string.*/   
    cout << static_cast<void*>(cptr) << endl;
    cptr++;
    cout << static_cast<void*>(cptr) << endl;
    cptr--;
    cout << static_cast<void*>(cptr) << endl;
    return 0;
}