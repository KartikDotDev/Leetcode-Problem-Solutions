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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* s3 = new ListNode();
        ListNode* result = s3;
        while(l1 || l2 || carry ) {
            
            int sum = ( ((l1 != NULL )? l1->val : 0) + ((l2 != NULL)?l2->val: 0) + carry);
            carry = sum / 10;

            s3 = s3->next = new ListNode(sum%10);

            ( l1 != NULL ) ? l1 = l1->next : NULL;
            ( l2 != NULL ) ? l2 = l2->next : NULL; 

        }
        return result->next;
        
    }
};