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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = new ListNode();
        temp = head;
        ListNode *curr = new ListNode();
        ListNode *prev = new ListNode();
        int length = 0;
        
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        if(length == 1 && n == 1)
            return NULL;
        
        int point = length - n + 1,i = 1;
        curr = head;
        if(point == 1)
            return head->next;
        while(i < point){
            i++;
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = curr->next;
        return head;
        
    }
};