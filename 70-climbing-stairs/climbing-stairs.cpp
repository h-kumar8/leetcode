class Solution {
public:

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int a=1;
        int b=1;
        for(int i=2;i<=n;i++){
            int c=a+b;
            b=a;
            a=c;
        }
        return a;
    }
};