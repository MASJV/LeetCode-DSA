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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL || head->next==NULL || k == 0){
            return head;
        }

        ListNode* temp = head;
        int length = 1;
        while (temp->next!=NULL) {
            length++;
            temp = temp->next;
        }

        k = k%length;
        if(k==0){
            return head;
        }
        temp->next = head;
        
        int rotate = length-k;
        ListNode* temp2 = head;
        for(int i=1;i<rotate;i++){
            temp2 = temp2->next;
        }
        ListNode* new_head = temp2->next;
        temp2->next = NULL;
        return new_head;

    }
};