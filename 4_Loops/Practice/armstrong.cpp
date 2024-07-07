#include <iostream>
using namespace std;

int main() {
    int original,n;
    
    cout << "Enter number: ";
    cin >> n;
    original = n;

    int sum = 0;
    while(n>0){
        int dig = n%10;
        int cube = dig*dig*dig;
        sum += cube;
        n /= 10;
    }

    if(original==sum){
        cout<<"Armstrong number."<<endl;
    }else{
        cout<<"Not Armstrong."<<endl;
    }
    return 0;
}
