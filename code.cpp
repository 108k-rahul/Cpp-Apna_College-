#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }

    void pushback(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void stllist(){
        list<int> stllist;

        Node* temp = head;
        while(temp!=NULL){
            stllist.push_back(temp->data);
            temp = temp->next;
        }

        stllist.sort();

        for(int val : stllist){
            cout<<val<<" ";
        }
        cout<<endl;

        auto it = stllist.end();
        --it;
        --it;
        stllist.erase(it);

        for(int val : stllist){
            cout<<val<<" ";
        }
        cout<<endl;
    }
};

int main(){
    List ll;
    
    int n = 5;
    int values;
    for(int i=0; i<n; i++){
        cin>>values;
        ll.pushback(values);
    }

    ll.stllist();
    return 0;
}