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
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int pos_remove = length - n;
        if (pos_remove == 0) {
            ListNode* new_head = head->next;
            delete head;
            return new_head;
        }

        temp = head;
        for (int i=1; i<pos_remove;i++) {
            temp = temp->next;
        }
        ListNode* node = temp->next;
        temp->next = node->next;
        delete node;
        return head; 
    }
};