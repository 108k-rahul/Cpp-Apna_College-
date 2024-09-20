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

class customlist{
    Node* head;
    Node* tail;
public:
    customlist(){
        head = NULL;
        tail = NULL;
    }
    void printlist(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insert(int val, int position){
        Node* newnode = new Node(val);

        Node* temp = head;
        for(int i=0; i<position-1; i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

};
class List{
public:
    list<int> ll;

    void pushback(int val){
        ll.push_back(val);
    }
    void pushfront(int val){
        ll.push_front(val);
    }
    void reverse(list<int>& ll_ref){
        ll_ref.reverse();
    }
    void sort(list<int>& ll_ref){
        ll_ref.sort();
    }
    void popfront(){
        ll.pop_front();
    }
    void popback(){
        ll.pop_back();
    }
};

int main(){
    List ll;
    customlist cl;

    int values;
    for(int i=0; i<5; i++){
        cin>>values;
        ll.pushback(values);
        cl.pushback(values);
    }
    cl.printlist();
    return 0;
}