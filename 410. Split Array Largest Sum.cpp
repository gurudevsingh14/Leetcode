class Solution {
public:
    int allocate(vector<int>a, int n, int m, int limit)
    {
        int assign = 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > limit)return 0;
            if (sum + a[i] <= limit)
                sum += a[i];
            else {
                sum = a[i];
                assign++;
            }
        }
        if (assign <= m)
            return 1;
        else
            return 0;
    }
    int splitArray(vector<int>& a, int m) {
        int n = a.size();
        int sum = 0;
        int low = a[0];
        int high = 0;
        for (int i = 0; i < n; i++) {
            high += a[i];
            low = min(low, a[i]);
        }

        int mid;
        int res = INT_MAX;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (allocate(a, n, m, mid)) {
                res = min(res, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return res;
    }
};