#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter no. : ";
    cin>> N;
    for (int i = 2; i <= N; i++) {
        int curr = i; // current number to check
        bool isPrime = true;

        for (int j = 2; j * j <= curr; j++) {
            if (curr % j == 0) {
                isPrime = false;
                break; // exit the loop as we found a divisor
            }
        }

        if (isPrime) {
            cout << curr << " "; // print prime number
        }
    }
    cout << endl;
    return 0;
}
