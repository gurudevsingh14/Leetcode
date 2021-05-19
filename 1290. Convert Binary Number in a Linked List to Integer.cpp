class Solution {
public:
    int getDecimalValue(ListNode* head) {
        stack<int>s;
        while(head!=NULL)
        {
            s.push(head->val);
            head=head->next;
        }
        int i=0;
        int ans=0;
        while(!s.empty())
        {
            ans+=pow(2,i)*s.top();
            i++;
            s.pop();
        }
        return ans;
    }
};