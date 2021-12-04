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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2)
    {    ListNode* ptr1;
          
         ListNode* ptr3;
              
        ptr1 = list1;
        ptr3 = list1;
        int i = 0;
        while(i<=a-2)
        {   
            
           
            
            ptr1 = ptr1->next;
            i++;
        }
        i=0;
        while(i<=b)
        {
            
            
             ptr3 = ptr3->next;
            i++;
        }
        
        ptr1->next = list2;
        while(list2->next!=NULL)
        {
            list2=list2->next;
        }
        list2->next = ptr3;
        return list1;
        
        
    }
};