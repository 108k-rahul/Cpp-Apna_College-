#include<iostream>
using namespace std;

int main(){
    int arr[4][3];
    int n=4, m=3;

    for(int i=0; i<n; i++){ //Row
        for(int j=0; j<m; j++){ // Cloumn
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){ //Row
        for(int j=0; j<m; j++){ // Cloumn
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}