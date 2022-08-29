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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head,*ptr = head,*ptr1 = head;
        
        if(!head||!(head->next))
            return head;
        
        int c = 0;
        
        while(ptr1!=NULL)
        {
            c++;
            ptr1=ptr1->next;
        }
        
        if(k > c)
            k =(k-c)%c;
    
        
        while(k > 0)
        {
            ListNode *temp1 = temp;
            
            while(temp1->next->next != NULL)
                temp1 = temp1->next;
            
            temp1->next->next = temp;
            temp = temp1->next;
            temp1->next = NULL;
          
            k--;
        }
        
        return temp;
    }
};