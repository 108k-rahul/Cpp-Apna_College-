#include <iostream>
using namespace std;

void diagonalCount(int mat[][3], int n){
    int sum = 0;

    // //O(n^2)
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i == j){
    //             sum += mat[i][j];  //pd
    //         }
    //         else if(j == n-i-1){
    //             sum += mat[i][j]; //sd
    //         }
    //     }
    // }
    // cout<<"diagonalSum: "<< sum<<endl; 

    //O(n)
    for(int i=0; i<n; i++){
        sum += mat[i][i]; //pd
        if(i != n-i-1){
            sum += mat[i][n-i-1]; //sd    
        }
    }
    cout<<"diagonalSum: "<< sum<<endl; 

}



int main(){
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int matrix2[3][3] = {{1, 2, 3},
                        {4,5, 6},
                        {7,8,9}};

    // diagonalCount(matrix, 4); 
    diagonalCount(matrix2, 3); 
    return 0;
}