class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        if(n==1)
            return a[0];
        int low=0;
        int high=n-2;
        int mid;
        while(low<=high)
        {
            mid=(high+low)/2;
            // if(a[mid+1]!=a[mid]&&a[mid]!=a[mid-1])
            //     return a[mid];
            if((mid%2==0&&a[mid+1]!=a[mid])||(mid%2!=0&&a[mid-1]!=a[mid]))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
                
        }
        return a[low];
    }
};