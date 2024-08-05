#include<iostream>
#include <cstring>
using namespace std;

int main(){
    // char ch = 'k';
    // int pos = ch - 'a'; //index of 'k'

    // cout<<(int)ch<<endl;
    // cout<<pos<<endl;

    // char work[] = {'c', 'o', 'd', 'e', '\0'};
    // // char work[4] = {'c', 'o', 'd', 'e', '\0'};
    // cout<<work<<endl;
    // cout<<strlen(work)<<endl;

    // char word[30];
    // cin >> word; //will not consider anything after whitespace.
    // cout<<"your word is: '"<<word<<"'"<<endl;
    // cout<<"length is: "<<strlen(word)<<endl<<endl;

    char sentence[30];
    cin.getline(sentence, 30, '*'); //will consider even after whitespace.
    cout<<"your sentence is: '"<<sentence<<"'"<<endl;
    cout<<"length is: "<<strlen(sentence)<<endl;
    return 0;
}