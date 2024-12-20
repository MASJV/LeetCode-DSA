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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* temp = head;
        int carry = 0;

        while(l1 != NULL || l2 != NULL){
            int sum = 0;
            if(l1 != NULL){ 
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;

            if(head == NULL){
                head = new ListNode(sum);
                temp = head;
            }
            else{
                temp->next = new ListNode(sum);
                temp = temp->next;
            }
        }
        if(carry != 0){
            temp->next = new ListNode(carry);
        }
        return head;
    }
};