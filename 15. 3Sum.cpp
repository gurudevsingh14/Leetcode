class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        int x=0,y,z;
        for(int x=0;x<n-2;x++)
        {   
            if(x>=1&&a[x]==a[x-1]){
                continue;
            }
            y=x+1;
            z=n-1;
            while(y<z)
            {
                if(a[y]+a[z]==-a[x]){
                    ans.push_back({a[x],a[y],a[z]});
                    while(y<z&&a[y]==a[y+1])
                    y++;
                    while(y<z&&a[z]==a[z-1])
                    z--;
                }
                if(a[y]+a[z]<-a[x])
                    y++;
                else
                    z--;
            }
        }
        return ans;
    }
};