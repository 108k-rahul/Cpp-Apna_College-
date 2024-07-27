#include<iostream>
#include<climits>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break; // => array is already sorted.
        }
        isSwap = false; // Reset isSwap for the next pass
    }
    print(arr, n); // Ensure print is called after sorting
}

void selectionSort(int *arr, int n){
    for(int i=0; i<n; i++){
        int minIndx = i;
        //loop to find min:
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndx]){
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
    print(arr, n);
}

void insertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            // swap(arr[prev], arr[prev+1]); //OR
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr,n);
}

void countSort(int arr[], int n) {
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++) {
        maxVal = max(maxVal, arr[i]);
    }

    int* freqArr = new int[maxVal + 1](); // Initialize frequency array with zeros

    for(int i=0; i<n; i++) {
        freqArr[arr[i]]++;
    }

    int index = 0;
    for(int i=0; i<=maxVal; i++) {
        while(freqArr[i] > 0) {
            arr[index++] = i;
            freqArr[i]--;
        }
    }

    delete[] freqArr; // Free the allocated memory
    print(arr, n);
}

int main(){
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);

    int arr2[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n2 = sizeof(arr2)/sizeof(int);
    countSort(arr2, n2);
    return 0;
}