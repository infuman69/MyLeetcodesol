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
    int size(ListNode* head)
    {
        int count = 0;
        while(head!=NULL)
        {
            count++;
            head = head->next;
            
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) 
    { 
      int val1,val2,i = 0,length = size(head);
        if(length == 1)
            return head;
        if(k == (length/2 + 1)&& length%2)
            return head;
        ListNode* curr = head;
        ListNode *curr1 , *curr2;
        while(curr)
        {
            if(i+1 == k)
            {
                val1 = curr->val;
                curr1 = curr;
                
            }
            else if(i+1 == length - k + 1)
            {
                val2 = curr->val;
                curr2 = curr;
            }
            curr = curr->next;
            i++;
        }
        curr1->val = val2;
        curr2->val = val1;
        return head;
        
    }
};