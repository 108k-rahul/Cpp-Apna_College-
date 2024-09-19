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
        
        while(head != NULL){
            cout<< temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    int n;
    cin>>n;
    
    List ll;
    for(int i=0; i<n; i++){
        ll.pushback(i);
    }
    
    ll.printlist();
    return 0;
}