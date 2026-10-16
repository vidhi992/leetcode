
class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int x : nums) {
            pq.push(x);
        }

        while (k--) {
            int a = pq.top();
            pq.pop();
            pq.push(a + 1);
        }

        long long product = 1;

        while (!pq.empty()) {
            product = (product * pq.top()) % MOD;
            pq.pop();
        }

        return product;
    }
};
