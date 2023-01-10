/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// bruteforce approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length=0;
        while(temp){
            length++;
            temp = temp->next;
        }
        int middle = length/2;
        temp=head;
        while(temp && middle--)
            temp=temp->next;
        return temp;
    }
};

// using two pointer approach 
//optimal approach
//explaination:
/*
Two popinter algorithm or tortoise and Har algorithm:
1. Initialize the two pointer sloe and fast at the head of list
2. Now everytime slow moves 1 step at a time while fast is moves 2 steps at a time.
When fast pointer arrives at the end, slow pointer will arrive right in the middle
of the  list
3. Now just return the value of slow pointer
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};