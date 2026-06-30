class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) 
        return INT_MAX;
        else if(dividend==INT_MIN && divisor<-1)
        {
            return (dividend/divisor);
        }
        else if(dividend==INT_MAX && divisor>0) return (dividend/divisor);
        else return (dividend/divisor);
    }
};