#include<iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){ //upppercase
            continue;
        }else{ //lowercase
            word[i] = (ch - 'a') + 'A'; //position + 'A'
        }
    }
    cout<<word<<endl;
}

int main(){
    char word[] = "AppLe";
    toUpper(word, strlen(word));
    return 0;
}