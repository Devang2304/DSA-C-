#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    // new node create
    Node* temp=new Node(d);
    temp->next=head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    temp->next=NULL;
    tail = temp;
}

void display(Node* &tail){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }
int main(){

    // created a new node
    Node* node1=new Node(10);
    // cout<<node1 -> data << endl;
    // cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* tail =node1;
    print(tail);
    insertAtTail(tail,20);
    print(tail);
    insertAtTail(tail,30);
    print(tail);

}
