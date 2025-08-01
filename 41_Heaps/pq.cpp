// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(5);
//     pq.push(10);
//     pq.push(3);
//     pq.push(9);
//     pq.push(7);

//     while(!pq.empty()){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class heap{
    vector<int> vec;
    priority_queue<int,vector<int>, greater<int> > pq;
public:
    void pushh(int val){
        pq.push(val);
    }

    void popp(){
        if(!pq.empty()){
            pq.pop();
        }else{
            cout<<"already empty.";
        }
    }

    int topp(){
        if(!pq.empty()){
            return pq.top();
        }else{
            cout<<"heap is empty";
            return -1;
        }
    }

    int emptyy(){
        return pq.empty();
    }

    int sizee(){
        return pq.size();
    }
};

int main(){
    heap hp;

    hp.pushh(5);
    hp.pushh(9);
    hp.pushh(4);
    hp.pushh(7);
    hp.pushh(3);

    while(!hp.emptyy()){
        cout<<hp.topp()<<" ";
        hp.popp();
    }


    return 0;
}