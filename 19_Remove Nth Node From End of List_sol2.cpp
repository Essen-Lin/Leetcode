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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first =head;
        ListNode* second =head;
        
        while(n){
            first =first->next;
            n--;
        }
        if(!first)
            return head->next;
        
        for(;first->next;first=first->next)
            second =second->next;
        
        if(second->next)
            second->next =second->next->next;
        
        return head;
        
    }
};