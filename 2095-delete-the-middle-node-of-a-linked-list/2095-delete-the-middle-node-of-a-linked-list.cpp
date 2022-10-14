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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)
            return NULL;
        int length = 0,i = 1;
        ListNode *temp,*temp2,*prev = new ListNode();
        temp = head;
        temp2 = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int middlepos = length/2 + 1;
        while (i < middlepos) {
            prev = temp2;
            temp2 = temp2->next;
            i++;
        }
        prev->next = prev->next->next;
        return head;
    }
};