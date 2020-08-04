class Solution {
public:
    int myAtoi(string str) {
    int sign = 1, ans = 0, i = 0;
    while (str[i] == ' ') 
        i++; 
        
    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i++] == '-'); 
    }
    while (str[i] >= '0' && str[i] <= '9') {
        if (ans >  INT_MAX / 10 || (ans == INT_MAX / 10 && str[i] - '0' > 7)) {
            if (sign == 1) return INT_MAX;
            else return INT_MIN;
        }
        ans  = 10 * ans + (str[i++] - '0');
    }
    return ans * sign;
    }
};
