class Solution {
public:
    double solvePositive(double x,int n)
    {
        if(n==0)
            return 1;
        double small=solvePositive(x,n/2);
        if(n%2==1)
            return small*small*x;
        else 
            return small*small;
    }
    double solveNegative(double x,int n)
    {
        if(n==-1)
            return 1/x;
        double small=solveNegative(x,n/2);
        if(n%2==0)
            return small*small;
        else 
            return small*small*(1/x);
    }
    double myPow(double x, int n) {
        if(n>=0)
        return solvePositive(x,n);
        else 
        return solveNegative(x,n);
    }
};