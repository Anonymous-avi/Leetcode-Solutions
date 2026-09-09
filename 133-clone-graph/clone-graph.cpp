/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*>mpp;
    
    Node* cloneGraph(Node* node) {
        
       //first check whether it is null or not 

       if(node==nullptr){
        return nullptr;
       }
       //now check whether it is already present in the map or not 
       if(mpp.find(node)!=mpp.end()){
        return mpp[node];
       }
       //if not then create a new node 
       Node* clone = new Node(node->val);

       mpp[node]=clone;

       for(auto &neighbour : node->neighbors){
        clone->neighbors.push_back(cloneGraph(neighbour));
       }

       return clone;

    }
};