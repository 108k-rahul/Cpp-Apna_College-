#include<iostream>
#include <cstring>
using namespace std;

void reverse(char word[], int n){
    int start = 0, end = n-1;
    while(start < end){
        // swap(word[start], word[end]);
        // start++;
        // end--;
        swap(word[start++], word[end--]);
    }
    cout<<"reversed array: "<<word<<endl;
}

int main(){
    char word[] = {'c', 'o', 'd', 'e', '\0'};
    int n = strlen(word);
    reverse(word,n);
    return 0;
}