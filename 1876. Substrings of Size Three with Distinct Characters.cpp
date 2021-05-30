class Solution {
public:
    int good(string s)
    {
        if(s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[0])
            return 1;
        return 0;
    }
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        if(n<3)
            return 0;
        string temp=s.substr(0,3);
        count+=good(temp);
        for(int i=3;i<n;i++)
        {
            temp=s.substr(i-2,3);
            count+=good(temp);
        }
        return count;
    }
};