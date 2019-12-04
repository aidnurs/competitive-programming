/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first=head;
        ListNode* second=head;
        for(int i=0;i<n;i++){
            second=second->next;
        }
        if(second==NULL){
            return head->next;
        }
        
        while(second->next!=nullptr){
            second=second->next;
            first=first->next;
        }
        
        first->next=first->next->next;
        return head;
    }
};