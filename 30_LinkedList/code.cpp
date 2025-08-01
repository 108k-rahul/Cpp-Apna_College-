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

    void push_front(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
    }

    void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insert(int val, int pos){
        Node* newnode = new Node(val);;
        Node* temp = head;

        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }

    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){ //of temp->next->next != NULL
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp -> data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main(){
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_back(6);
    ll.push_back(7);

    ll.printList();

    cout<<ll.search(4)<<endl;

    // ll.insert(100,2);
    // ll.printList();

    // ll.pop_front();
    // ll.printList();

    // ll.pop_back();
    // ll.printList();
    return 0;
}