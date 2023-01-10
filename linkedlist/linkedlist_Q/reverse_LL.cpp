//using iterative approach : for reversing a linked list
class Solution {
    public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;

        }
        return prev;
    }

};

//reverse a linked list using recursive approach
class Solution {
    public:
    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        reverse(head,curr,prev);
        return head;
    }

};
void reverse(ListNode* &head,ListNode* curr,ListNode* prev){
    // base case
    if(curr==NULL){
        head=prev;
        return;
    }
    ListNode* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}