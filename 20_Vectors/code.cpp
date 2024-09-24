#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1;
    vector<int> vec2 = {1,2,3,4};
    vector<int> vec3(10, -1); //size 10, initialized with -1
    cout<<vec1.size()<<endl;
    cout<<vec2.size()<<endl;
    cout<<vec3.size()<<endl;

    for(int i=0; i<vec2.size(); i++){
        cout<<vec2[i]<<" "; // vec[i] = *(vec+i). Same internal conversion as arrays.
    }
    cout<<endl;
    for(int i=0; i<vec3.size(); i++){
        cout<<vec3[i]<<" ";
    }
    cout<<endl;
    return 0;
}