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
    ListNode* removeElements(ListNode* head, int val) 
    {   ListNode *ptr,*prev,*temp;
        ptr = head;
        if(head == NULL)
            return head;
        while(ptr!=NULL&&ptr->next!=NULL)
        {   prev = ptr;
            ptr = ptr->next;
            if(ptr->val == val&&ptr!=NULL)
            {
                prev->next = ptr->next;
                temp = ptr ; 
                delete temp;
                ptr = prev;
                continue;
            }
            
            
        }
        if(head->val == val)
        {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        return head;
        
    }
};