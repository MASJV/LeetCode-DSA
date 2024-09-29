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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {        
        if (headA == NULL || headB == NULL) {
            return NULL;
        }

        ListNode*  temp1 = headA;
        ListNode* temp2 = headB;
        int lengthA = 0;
        int lengthB = 0;

        while(temp1!=NULL){
            lengthA++;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            lengthB++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;

        int diff = abs(lengthA-lengthB);
        if(lengthA>lengthB){
            for(int i=0;i<diff;i++){
                temp1 = temp1->next;
            }
        }
        if(lengthA<lengthB){
            for(int i=0;i<diff;i++){
                temp2 = temp2->next;
            }
        }
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1 == temp2) {
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};