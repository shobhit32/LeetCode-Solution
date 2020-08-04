class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign=(dividend<0 ^ divisor<0)?-1:1;
        double x=(double)(dividend);
        double y=(double)(divisor);
        double num=(log(abs(x))-log(abs(y)));
        double val=exp(num);
        if(val>=INT_MAX)
            return (sign==-1)?INT_MIN:INT_MAX;
        return (sign==-1)?-floor(val):floor(val);
    }
};
