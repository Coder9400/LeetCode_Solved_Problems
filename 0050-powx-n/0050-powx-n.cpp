class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        int  a = n;
        if(x>1 && n==INT_MIN) return 0;
        else if(a<0 && a!=INT_MIN) a = a*-1;  
        ans = pow(x,a);
        if(n<0) ans = 1/ans;
        return ans;
    }
};