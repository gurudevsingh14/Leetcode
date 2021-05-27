class Solution {
public:
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
            swap(a[i],a[l]);
            permutations(a,l+1,r);
            swap(a[i],a[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
        permutations(a,0,a.size());
        return ans;
    }
};