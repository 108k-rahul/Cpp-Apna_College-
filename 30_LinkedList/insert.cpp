#include<iostream>
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

    void pushfront(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
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

    void printlist(){
        Node* temp = head;
        
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp-> next;
        }
        cout<<"NULL\n";
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

int main(){
    List ll;

    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.printlist(); //1->2->3->NULL

    ll.pushback(4);
    ll.pushback(5);
    ll.pushback(6);
    ll.printlist(); //1->2->3->4->5->6->NULL

    ll.insert(100,2); //1->2->100->3->4->5->6->NULL
    ll.printlist();
    return 0;
}