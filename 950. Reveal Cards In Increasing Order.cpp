class Solution {
public:
    int validSpace(vector<int>&ans)
    {
        for(int j=0;j<ans.size();j++)
            if(ans[j]==0)
                return j;
        return 0;
    }
    vector<int> deckRevealedIncreasing(vector<int>& a) {
        int n=a.size();
        vector<int>ans(n,0);
        sort(a.begin(),a.end());
        int i=0,j=0,k=2;
        while(i<n)
        {   
            if(j>n-1)
            {
                if(j-(k/2)<n)
                    j=validSpace(ans);
                else
                    j=validSpace(ans)+k;
                k*=2;
                if(j>n-1)
                    break;
            }
            ans[j]=a[i];
            j+=k;
            i++;
        }
        if(validSpace(ans))
        ans[validSpace(ans)]=a[n-1];
        return ans;
    }
};