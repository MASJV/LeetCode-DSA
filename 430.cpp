/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;
        while(temp!=NULL){
            if(temp->child==NULL){
                temp = temp->next;
            }
            else{
                Node* temp2 = temp->next;
                Node* flattenChild = flatten(temp->child);
                temp->next = flattenChild;
                flattenChild->prev = temp;
                temp->child = NULL;
                while(temp->next!=NULL){
                    temp = temp->next;
                }
                if(temp2!=NULL){
                    temp->next = temp2;
                    temp2->prev = temp;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};