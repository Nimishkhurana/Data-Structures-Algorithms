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
    void addNode(ListNode* prev, int v){
        ListNode *temp = new ListNode(v);
        prev->next = temp;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *t1 = l1,*t2 = l2;
        ListNode *head = new ListNode(0);
        ListNode *temp = head; 
        while(t1 && t2){
            ListNode *N;
            if(t1->val <= t2->val){
                N = new ListNode(t1->val);
                t1 = t1->next;
            }
            else{
                N = new ListNode(t2->val);
                t2 = t2->next;
            }
            temp->next = N;
            temp = N;
        }
        while(t1){
            ListNode *N = new ListNode(t1->val);
            t1 = t1->next;
            temp->next = N;
            temp = N;
         }
        while(t2){
            ListNode *N = new ListNode(t2->val);
            t2 = t2->next;
            temp->next = N;
            temp = N;
         }
            
        return head->next;
    }
};