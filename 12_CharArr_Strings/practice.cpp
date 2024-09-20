#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string s = "AABBCCasdfaAADDS";
//     int n = s.length();
//     cout<<n<<endl;


//     string arr[100];

//     for(int i=0; i<n; i++){
//         arr[i] = s[i];
//     }

//     for(int i=0; i<n; i++){
//         bool isduplicate = false;

//         for(int j=0; j<i; j++){
//             if(arr[i] == arr[j]){
//                 isduplicate = true;
//                 break;
//             }
//         }
//         if(!isduplicate){
//             cout<<arr[i];
//         }
//     }
        
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "AABBCC";
    unordered_set<char> uniqueChars;

    for (char c : s) {
        uniqueChars.insert(c); // Insert characters into the set
    }

    // Print unique characters
    for (char c : uniqueChars) {
        cout << c;
    }


    return 0;
}
