#include <iostream>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){};
};

int main(int argc, char const *argv[]) {
    ListNode* l1=new ListNode(1);
    std::cout << l1->val << '\n';
    return 0;
}
