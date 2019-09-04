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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head=l1;
        ListNode* tmp=nullptr;
        if(l1==nullptr){
            return l2;
        }
        if(l1!=nullptr&&l2!=nullptr){
            if(l1->val>l2->val){
                tmp=l1;
                l1=l2;
                l2=tmp;
                tmp=nullptr;
                head=l1;
            }
        }
        while(l1!=nullptr&&l2!=nullptr){
            if(l1->next==nullptr&&l2!=nullptr){
                l1->next=l2;
                l2=nullptr;
                break;
            }
            if(l1->next!=nullptr){
                if(l1->next->val>=l2->val){
                    tmp=l2->next;
                    l2->next=l1->next;
                    l1->next=l2;
                    l2=tmp;
                }
            }
            l1=l1->next;
        }

        return head;
    }
};
