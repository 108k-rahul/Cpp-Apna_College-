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


// int main() {
//     //C++ char arrays
//     /*char word[20];
//     cin.getline(word, 20);
//     cout << "your word is : " << word << endl;*/
    
//     //<cstring> functions
//     /*strcpy(word, "c++");
//     cout << "now your word is : " << word << endl;

//     strcat(word, " is my favorite");
//     cout << word << endl;

//     cout << strcmp("hello", "hello") << endl;
//     cout << strcmp("abc", "xyz") << endl;*/

//     //C++ Strings
//     string str;
//     getline(cin, str);
//     cout << str << endl;

//     //String Member Functions
//     cout << str.length() << endl;
//     cout << str.at(0) << endl;
//     cout << str.substr(2, 3) << endl;
//     cout << str.find("college") << endl;
//     cout << str.find("xyz") << endl;
//     return 0;    
// }