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
        ListNode* temp =head;
        
        int s=0;
        while(temp){
            temp = temp->next;
            s++;
        }
        //cout<<s;
        n = s-n;
        
        temp =head;
        if(n==0) return head->next;
       
        while(n-1){
            temp =temp->next;
            n--;
        }
        
        if(temp->next) temp->next = temp->next->next;
        
        return head;
        
        
    }
};