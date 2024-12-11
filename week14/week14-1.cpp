class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        while( l1 != nullptr )
        {
            now -> next = new ListNode( l1 -> val );
            l1 = l1 -> next;
            now = now -> next;
        }
        return ans -> next;
    }
};
