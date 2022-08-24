class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> v1={head};
        while(v1.back()->next!=NULL){
            v1.push_back(v1.back()->next);
        }
        return v1[v1.size()/2];
    }
};
