class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string ans="";
        while(n>0)
        {
            if((k-n)>=26){
                ans+="z";
                k-=26;
                n--;
            }
            else
            {
                if(k==n)
                {
                    while(n--)
                        ans+="a";
                }
                else
                {   
                    char c='a'+(k-n);
                    ans+=c;
                    k-=(k-n)+1;
                    n--;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};