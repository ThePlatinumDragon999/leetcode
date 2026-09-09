class Solution {
public:
    int climbStairs(int n) {
        if (n < 4) {
            return n;
        }

        long long previous1 = 3;
        long long previous2 = 2;
        long long sum;

        for (int i = 4; i <= n; ++i) {
            sum = previous1 + previous2;
            previous2 = previous1;
            previous1 = sum;
        }

        return sum;
    }
};