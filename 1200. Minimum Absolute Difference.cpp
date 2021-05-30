class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        int diff=INT_MAX;
        
        vector<vector<int>>ans;
        for(int i=1;i<n;i++)
        {   
            if(a[i]-a[i-1]<diff){
                ans.clear();
                ans.push_back({a[i-1],a[i]});
                diff=a[i]-a[i-1];
            }
            else if(a[i]-a[i-1]==diff)
                ans.push_back({a[i-1],a[i]});
        }
        return ans;
    }
};