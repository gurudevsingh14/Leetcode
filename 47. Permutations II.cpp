class Solution {
public:
    bool canPermute(vector<int>a,int start,int curr)
    {
        for(int i=start;i<curr;i++)
            if(a[i]==a[curr])
                return false;
        return true;
    }
    
    vector<vector<int>>ans;
    void permutations(vector<int>&a,int l,int r)
    {
        if(l==r)
        {
            ans.push_back(a);
            return;
        }
        for(int i=l;i<r;i++)
        {
            
            if(canPermute(a,l,i)) {
                swap(a[i],a[l]);
                permutations(a,l+1,r);
                swap(a[i],a[l]);
            }
        }
        
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permutations(nums,0,nums.size());
        return ans;
    }
};