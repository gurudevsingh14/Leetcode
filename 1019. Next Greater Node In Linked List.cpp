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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        stack<int>s;
        int i=0;
        while(head!=NULL)
        {   
            if(!s.empty())
            {
                while(!s.empty()&&head->val>ans[s.top()])
                {   
                    ans[s.top()]=head->val;
                    s.pop();
                }
            }
            s.push(i);
            ans.push_back(head->val);
            head=head->next;
            i++;
        }
        while(!s.empty())//if next greater element dosen't exist
        {
            ans[s.top()]=0;
            s.pop();
        }
        return ans;
    }
};