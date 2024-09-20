#include<bits/stdc++.h>
using namespace std;

void reversechar(char word[], int n){
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
    reversechar(word,n);

    reverse(word, word+n);

    cout<<word<<endl;
    return 0;
}