/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *pos= new ListNode;
        pos = NULL;
    
        int i = 0;
        unordered_map<ListNode*,int> mp;
        while(head!=NULL)
        {
            if(mp.find(head)!=mp.end())
            {
                pos = head;
                break;
            }
            mp.insert({head,i});
                i++;
            head = head->next;
        }
        if(pos)
            return pos;
        return NULL;
    }
};