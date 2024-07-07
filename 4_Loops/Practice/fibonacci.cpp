#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int first = 0, second = 1;
    
    // Print the first two Fibonacci numbers
    cout << first << " " << second << " ";
    
    // Loop to generate the next Fibonacci numbers
    for (int i = 2; i < n; i++) {
        int third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }
    cout << endl;

    return 0;
}
