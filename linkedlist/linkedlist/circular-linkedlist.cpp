#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
int data;
Node* next;
Node (int data){
    this->data=data;
    this->next=NULL;
}
~Node(){
    int value= this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"Memory is free for the node with data "<<value<<endl;
}
    
};

void insertNode(Node* &tail,int element, int d){

    //in case of  empty list
    if(tail==NULL){
        Node* newNode = new Node(d); 
        tail=newNode;
        newNode->next =newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }
        cout<<endl;

        // element found -> curr is representing element wala node
        Node *temp =new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* tail){
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    
}

void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty, pleasse check again"<<endl;
        return ;
    }
    else{
        //non-empty list
        //assuming that the value is present in the linkedlist
        Node* prev= tail;
        Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }   
        prev->next=curr->next;

        //1 Node linked list
        if(curr==prev){
            tail=NULL;
        }

        // >=2 Node linked list
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* tail= NULL;

    //empty list me insert krre hai 
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    insertNode(tail,3,4);
    print(tail);
    cout<<endl;
    deleteNode(tail,4);
    print(tail);
    return 0;
}