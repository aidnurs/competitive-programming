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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=l1;
        bool of=false;
        while(l1!=nullptr||l2!=nullptr){
            if (l1!=nullptr) {
                std::cout << l1->val << '\n';
            }
            if (l2!=nullptr) {
                std::cout << l2->val << '\n';
            }
            l1=l1->next;
            l2=l2->next;
        }

        return head;
    }
};
