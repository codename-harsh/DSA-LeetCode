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
    Node* solver(Node*& head, unordered_map<Node*, Node*>&mp) {
        if(!head) return 0;
        Node* n = new Node(head->val);
        mp[head] = n;
        n->next = solver(head->next, mp);
        if(head->random ) {
            n->random = mp[head->random];
        }
        return n;
    }
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        return solver(head, mp);
    }
};