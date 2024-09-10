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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* head_copy=head;
        while(head!=NULL && head->next!=NULL)
        {
            int gcd=__gcd(head->val,head->next->val);
            auto curr_next=head->next;
            head->next=new ListNode(gcd,curr_next);
            head=head->next->next;
        }   
        return head_copy;
    }
};