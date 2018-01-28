class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> S1;
        stack<int> S2;
        stack<int> ans;
        while(l1){
            S1.push(l1 -> val);
            l1 = l1->next;
        }
        while(l2){
            S2.push(l2->val);
            l2 = l2 -> next;
        }
        int extra = 0;
        ListNode pHead = ListNode(0);
        ListNode* pNode = &pHead;
        while(!S1.empty()||!S2.empty() || extra){
            int sum = (S1.empty() ? 0 : S1.top()) + (S2.empty() ? 0: S2.top()) + extra;
            extra = sum /10;
            ans.push(sum % 10);
            if(!S1.empty()){
                S1.pop();
            }
            if(!S2.empty()){
                S2.pop();
            }
        }
        while(!ans.empty()){
            pNode->next = new ListNode(ans.top());
            ans.pop();
            pNode = pNode -> next;
        }
        return pHead.next;

    }
};
