#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data =data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        // code for memory free
        if(this->next!= NULL){
            delete next;
            this->next = NULL;
        }
    cout<<"Memory free for node with data "<<value<<endl;
    }
};
// insertion of the next node at head
   void insertionAtHead(Node* &head,int d){
    //creating new node for int d
    Node* temp=new Node(d);
    temp->next =head;
    head = temp;
    }
    void insertionAtTail(Node* &tail,int a){
        Node* temp=new Node(a);
        tail->next=temp;
        tail=temp;
    }

    // if we try to insert a node at the position 1 then we
    // can't insert a node at that position since
    //we're already pointing to that node
    void insertionAtPosition(Node* &tail,Node* &head,int position,int a){
        //insert at start
        if(position==1){
            insertionAtHead(head,a);
            return;

        }
        Node* nodetoinsert=new Node(a);
        Node* temp=head;
        int count=1;
        while(count<position-1){
            temp=temp->next;
            count++;
        }
        //inserting at last position
        if(temp->next==NULL){
            insertionAtTail(tail,a);
            return;
        }
        nodetoinsert->next=temp->next;
        temp->next=nodetoinsert;
    }

    void deleteNode(int position,Node* &head){
        //deleting first or start node
        if(position==1){
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            //memory free start node
            delete temp;
        }
        else{
            //deleting any middle node or last node
            Node* curr=head;
            Node* prev = NULL;

            int cnt=1;
            while(cnt<position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next = curr->next;
            curr->next= NULL;
            delete curr;
        }
    }
    void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

int main(){
    Node* node1 =new Node(10);
    Node* node2=new Node(20);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // Node* node3 = new Node(30);
    Node* head = node1;
    insertionAtHead(head,13);
    // print(head);   
    Node* tail =node1;
    insertionAtTail(tail,40);
    // print(head);
    // cout<<endl;
    insertionAtTail(tail,79);
    // print(head);
    insertionAtPosition(tail,head,3,45);
    insertionAtPosition(tail,head,1,34);
    //in this case we have inserted 99 at end but haven't updated 
    //the tail so we need to do that
    insertionAtPosition(tail,head,7,99);
    print(head);
    cout<<endl;
    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;

    deleteNode(5,head);
    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;

    print(head);
    return 0;
}