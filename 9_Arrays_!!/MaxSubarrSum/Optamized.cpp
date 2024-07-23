#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){ // start = 2
        int currentSum = 0;
        for(int end=start; end<n; end++){ // end = 2,3,4,5
            currentSum += arr[end]; 
            maxSum = max(currentSum, maxSum);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
        }
        // cout<<endl;
    }
    cout<<"max SubArraySum = "<< maxSum;
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);
    
    return 0;
}