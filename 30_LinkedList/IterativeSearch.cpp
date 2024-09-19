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

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
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

        while(temp!= NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
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

    void popfront(){
        Node* temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }

    void popback(){
        Node* temp = head;

        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int IterativeSearch(int key){
        Node* temp = head;
        int indx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return indx;
            }else{
                temp = temp->next;
                indx++;
            }
        }
        return -1;
    }


};

int main(){
    List ll;

    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.printlist();

    ll.pushback(4);
    ll.pushback(5);
    ll.pushback(6);
    ll.printlist();

    cout<<ll.IterativeSearch(3)<<endl;


    return 0;
}