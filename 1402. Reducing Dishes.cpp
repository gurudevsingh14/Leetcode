class Solution {
public:
    int maxSatisfaction(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        int curr=0;
        int ans=0;
        int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            curr+=a[i];
            sum+=curr;
            ans=max(ans,sum);
        }
        return ans;
    }
};