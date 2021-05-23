class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n=a.size();
        
        int low=0;
        int high=n-1;
        int mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(a[mid-1]<a[mid]&&a[mid+1]<a[mid])
            {
                return mid;
            }
            else if(a[mid]<a[mid-1])
            {
                high=mid;
            }
            else 
            {
                low=mid+1;
            }
        }
        return mid;
    }
};