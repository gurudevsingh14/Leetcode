class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>sum(n+1);
        vector<int>a(n+1);
        sum[0]=0;
        a[0]=0;
        for(int i=1;i<n+1;i++){
        sum[i]=sum[i-1]+nums[i-1];
        a[i]=nums[i-1];
        }
            
        int ans=0;
        int l=0;
        for(int i=0;i<n+1;i++)
        {
            if(m[a[i]]!=0&&m[a[i]]>l)
                l=m[a[i]];
            m[a[i]]=i;
            ans=max(ans,sum[i]-sum[l]);
        }
        return ans;
    }
};