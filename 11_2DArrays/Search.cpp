#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int i=0, j=m-1;

    while(i < n && j>=0){
        if(mat[i][j] == key){
            cout<<"key found at: ("<< i<<","<<j<<")"<<endl;
            return true;
        }else if(mat[i][j] < key){
            //down
            i++;
        }else{
            //left
            j--;
        }
    }
    cout<<"key not found;";
    return false;
}

int main(){
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int key = 11;

    search(matrix,4,4,key);

    return 0;
}