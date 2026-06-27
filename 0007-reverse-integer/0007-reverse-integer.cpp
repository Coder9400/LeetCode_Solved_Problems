class Solution {
public:
    int reverse(int x) {
        long long int a = x;
        long long int b = 0;
        while(a!=0)
        {
            b = b*10 + (a%10);
            a =a/10;
        }
      if(b>2147483641 || b<=-2147483648) return 0;
      else return b;
    }
};