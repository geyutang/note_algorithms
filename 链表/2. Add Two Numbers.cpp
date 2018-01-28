class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode pHead(0);
        ListNode* pNode = &pHead;
        int extra = 0;
        while(l1 || l2 || extra){
            int sum = (l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val) + extra;
            extra = sum / 10;
            pNode->next = new ListNode(sum % 10);
            l1 = (l1 == NULL ? l1 : l1->next);
            l2 = (l2 == NULL ? l2 : l2->next);
            pNode = pNode->next;
        }
        return pHead.next;
    }
};
