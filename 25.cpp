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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count = k;
        if(count == 1){
            return head;
        }
        while(count>1 && temp->next!=NULL){
            temp = temp->next;
            count--;
        }
        if(count>1){
            return head;
        }
        ListNode* firstLL = head;
        ListNode* broken = temp->next;
        temp->next = NULL;
        ListNode* reversed = reverse(firstLL);
        ListNode* traverse = reversed;
        while(traverse->next!=NULL){
            traverse = traverse->next;
        }
        traverse->next = reverseKGroup(broken,k);
        return reversed;
    }
    ListNode* reverse(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* cur = head;
            while(cur!=NULL){
                ListNode* new_next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = new_next;
            }
            return prev;
    }
};