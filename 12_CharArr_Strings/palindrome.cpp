#include<iostream>
#include <cstring>
using namespace std;

bool reverse(char word[], int n){
    int start = 0, end = n-1;
    while(start < end){
        if(word[start++] != word[end--]){
            cout<<"not a valid palindrome.";
            return false;
            // start++;
            // end--;
       }
    }
    cout<<"valid palindrome";
    return false;
}

int main(){
    char word[] = "madam";
    int n = strlen(word);
    reverse(word,n);
    return 0;
}