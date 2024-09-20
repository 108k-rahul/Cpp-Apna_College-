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
        head = NULL;
        tail = NULL;
    }
    
    void pushback(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pushfront(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next =  head;
            head = newnode;
        }
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

    void sort(){
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
        
    }

    void stllist(){
        list<int> stllist;
        list<int>::iterator itr;

        Node* temp = head;
        while(temp!= NULL){
            stllist.push_back(temp->data);
            temp = temp->next;
        }

        stllist.sort();


        for(int val : stllist){
            cout<<val<<" ";
        }
        cout<<endl;
    }
};

int main(){
    List ll;
    list<int> stllist;

    int n;
    cin>>n;

    int values;
    for(int i=0; i<n; i++){
        cin>>values;
        ll.pushback(values);
        stllist.push_back(values);
    }
    
    // for(int val : stllist){
    //     cout<< val<<" ";
    // }
    // cout<<endl;

    // ll.sort();

    ll.stllist();
    return 0;
}