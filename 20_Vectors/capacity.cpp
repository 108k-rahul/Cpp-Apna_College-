#include<iostream>
#include<vector>
using namespace std;

//Size : no of elements.
//Capacity : max no of elements vector can store.

int main(){
    vector<int> vec = {1,2,3};

    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl;

    vec.push_back(4);
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl; //capacity double

    vec.pop_back();
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl; //now capacity will not decrease once increased.
    return 0;
}