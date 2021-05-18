class Solution {
public: 
    int max(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)
            return 0;
        int first=0,last=n-1;
        int max1=height[first];//left pointer
        int max2=height[last];//right pointer
        int count=0;
        while(first<last)
        {
            if(max1<=max2)
            {
                first++;
                if(height[first]<max1)
                {
                    count+=max1-height[first];
                }
                max1=max(max1,height[first]);
            }
            else
            {
                last--;
                if(height[last]<max2)
                {
                    count+=max2-height[last];
                }
                max2=max(max2,height[last]);
            }
        }
        return count;
    }
};