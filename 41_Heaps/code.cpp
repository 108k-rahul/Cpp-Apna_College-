#include<bits/stdc++.h>
using namespace std;

class Heap{
public:
    vector<int> vec;
    priority_queue<int> pq;

    void push(int val){
        vec.push_back(val);

        int child = vec.size()-1;
        int parent = (child-1)/2;

        while(parent >= 0 && vec[child] > vec[parent]){
            swap(vec[child], vec[parent]);
            child = parent;
            parent = (child-1)/2;
        }
    }

    void heapify(int i){
        if(i >= vec.size()){
            return;
        }
        int l = 2*i+1;
        int r = 2*i+2;

        int maxidx = i;
        if(l < vec.size() && vec[l] > vec[maxidx]){
            maxidx = l;
        }
        if(r < vec.size() && vec[r] > vec[maxidx]){
            maxidx = r;
        }

        swap(vec[i],vec[maxidx]);
        if(maxidx != i){
            heapify(maxidx);
        }
    }

    void pop(){
        swap(vec[0], vec[vec.size()-1]);
        vec.pop_back();

        heapify(0);
    }

    int top(){
        return vec[0];
    }

    int empty(){
        return vec.size() == 0;
    }
};

int main(){
    Heap heap;
    heap.push(5);
    heap.push(7);
    heap.push(1);
    heap.push(3);

    cout<<heap.top()<<endl;

    heap.pop();
    cout<<heap.top()<<endl;
    return 0;
}