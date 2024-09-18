#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){ //constructor
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

    void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    List ll;

    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.printList();

    ll.pushback(4);
    ll.pushback(5);
    ll.pushback(6);
    ll.printList();

    for(int i=7; i<=10; i++){
        ll.pushback(i);
    }
    ll.printList();
    return 0;
}