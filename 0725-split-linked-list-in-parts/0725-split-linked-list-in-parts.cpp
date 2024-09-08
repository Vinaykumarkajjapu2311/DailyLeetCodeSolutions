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
    int getCount(ListNode* head) 
{ 
    // Initialize count 
    int count = 0; 
 
    // Initialize current 
    ListNode* current = head;
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len=getCount(head);
        int partsize=len/k;
        int extra=len%k;
        vector<ListNode*>ans;
        ListNode*curr=head,*prev=NULL;
        while(head)
        {
            int eachpartsize=partsize;

            ans.push_back(curr);

            while(curr!=NULL && eachpartsize>0)
            {
                prev=curr;
                curr=curr->next;
                eachpartsize--;
            }

            if(extra > 0 && curr!=NULL)
            {
                prev=curr;
                curr=curr->next;
                extra--;
            }

            if(prev!=NULL)
            {
                head=curr;
                prev->next=NULL;
            }

           
        }
         while(ans.size()!=k)
            {
                ans.push_back(NULL);
            }
            return ans;
    }
};