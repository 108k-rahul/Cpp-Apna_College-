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

    void heapify(int i){
        if(i > vec.size()){
            return;
        }

        int left = 2*i+1;
        int right = 2*i+2;
        int max = i;

        if(left < vec.size() && vec[left] > vec[max]){
            max = left;
        }

        if(right < vec.size() && vec[right] > vec[max]){
            max = right;
        }


        swap(vec[i],vec[max]);

        heapify(max);
    }

    void pop(){
        swap(vec[0], vec[vec.size()-1]);

        vec.pop_back();

        heapify(0);
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