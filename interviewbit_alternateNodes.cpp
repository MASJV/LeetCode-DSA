/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
        
    ListNode* reverse(ListNode* head, bool toAlternate) {
            if(toAlternate == false){
                return head;
            }
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
    
    ListNode* helper(ListNode* head, int k, bool toAlternate) {
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
        ListNode* reversed = reverse(firstLL, toAlternate);
        ListNode* traverse = reversed;
        while(traverse->next!=NULL){
            traverse = traverse->next;
        }
        traverse->next = helper(broken,k, !toAlternate);
        
        return reversed;
    }  

    ListNode* Solution::solve(ListNode* A, int k) {
        bool toAlternate = true;
        return helper(A, k, toAlternate);
    }