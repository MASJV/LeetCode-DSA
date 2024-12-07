/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // key is old node and value is cloned node
        unordered_map<Node*, Node*> cloneMap;
        return copyRandomListrecur(head, cloneMap);
    }
                                                       //hash = cloneMap fine asParameter
    Node* copyRandomListrecur(Node* head, unordered_map<Node*, Node*> &cloneMap){
        if(head == NULL){
            return NULL;
        }
        else if(cloneMap.find(head) != cloneMap.end()){
            return cloneMap[head];
        }
        else{
            cout<<head->val<<endl;
            Node* newHead = new Node(head->val);
            cloneMap[head] = newHead;
            newHead->next = copyRandomListrecur(head->next, cloneMap);
            newHead->random = copyRandomListrecur(head->random, cloneMap);

            return newHead;
        }
    }
};