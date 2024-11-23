#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;

    int a;
    for(int i=0; i<5; i++){
        cin>>a;
        pq.push(a);
    } 

    while(!pq.empty()){
        pq.top();
        pq.pop();
    }
    return 0;
}