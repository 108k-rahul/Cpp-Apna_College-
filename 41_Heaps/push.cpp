#include<bits/stdc++.h>
using namespace std;

class heap{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);

        int child = vec.size()-1;
        int parent = (child-1)/2;

        while(vec[child] > vec[parent] && parent >= 0){
            swap(vec[child], vec[parent]);
            child = parent;
            parent = (child-1)/2;
        }
    }

    void pop(int val){

    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size() == 0;
    }
};

int main(){
    heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);
    heap.push(500);

    cout<<"top = "<< heap.top()<<endl;

    cout<<heap.empty();
    return 0;
}