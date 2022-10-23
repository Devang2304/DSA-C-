#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int data){
        this->data=data;
        this->next=NULL;

    }
};
//inserting at head of the linkedlist
    void InsertAtHead(Node* &head, int d){
        Node* temp= new Node(d);
        temp->next=head;
        head=temp;    
    }

//inserting at tail of the linkedlist
void InsertAtTail(Node* &tail, int d) {
    Node * temp= new Node(d);
    tail->next=temp;
    tail=temp;
}   
//inserting element at the place we want to.
void InsertAtPosition(Node* &head,int position,int d){
    Node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // creating the node that is to be inserted
    Node* nodetoInsert=new Node(d);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;

}

// printing the linkedlist
void print(Node* &head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
    
int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    print(head);
    InsertAtTail(tail,12);
    print(tail);
        InsertAtTail(tail,15);
    print(tail);
    InsertAtTail(tail,19);
    print(tail);
    InsertAtPosition(head,3,11);
    print(head);
    return 0;
}