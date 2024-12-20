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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
        return NULL;
    } 
        if (head->next == NULL){
            return head;
        }
        else{
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
    }
};