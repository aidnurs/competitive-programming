/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int counter=0;
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr){
            if(n==1){
                return nullptr;
            }
            counter++;
            return head;
        }
        head->next=removeNthFromEnd(head->next,n);
        if(counter>0){
            if(counter==n-1){
                head=head->next;
            }
            counter++;
        }
        return head;
    }
};
