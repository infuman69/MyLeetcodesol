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
    ListNode* swapNodes(ListNode* head, int k) 
    {  vector<int> swappedlist;
       int i = 0;
        ListNode* ptr;
        ListNode* ptr1;
        ptr = head;
        while(ptr!=NULL)
        {
            swappedlist.push_back(ptr->val);
            ptr=ptr->next;
        }
        int temp = swappedlist[k-1];
        swappedlist[k-1] = swappedlist[swappedlist.size()-k];
        swappedlist[swappedlist.size()-k]=temp;
        ptr1 = head;
        
        while(ptr1!=NULL)
        {
            ptr1->val= swappedlist[i++];
            ptr1=ptr1->next;
        }
     return head;
        
      
        
    }
};