// work nahi kr rha hai yeh when list count is odd
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
        
//         //base call
//         if(head==NULL){
//             return NULL;
//         }

//         //step1 : reverse first k nodes
//         Node* next= NULL;
//         Node* curr= head;
//         Node* prev= NULL;
//         int cnt=0;

//         while(curr!=NULL && cnt<k){
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//             cnt++;
//         }
//         // ab bhaad mei jaye sab 
//         //recursion dekh lega
//         if(next!=NULL){
//             head->next=reverseKGroup(next,k);
//         }
//         return prev;
//     }
// };


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cursor=head;
        for(int i=0;i<k;i++){
            if(cursor==NULL){
                return head;
            }
            else{
                curr=curr->next;
            }
        }
        ListNode* curr = head;
        ListNode* prev=NULL;
        ListNode* nxt=NULL;

        for(int i=0;i<k;i++){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head->next=reverseKGroup(curr,k);
        return prev;      
    }
};