class Solution {
public:
    int minRange(int a, int b, int c) {

        int ans = max({a, b, c}) - min({a, b, c});

        int x = b + c;
        ans = min(ans, max({x, b, c}) - min({x, b, c}));

        x = a + c;
        ans = min(ans, max({a, x, c}) - min({a, x, c}));

        x = a + b;
        ans = min(ans, max({a, b, x}) - min({a, b, x}));

        return ans;
    }
};