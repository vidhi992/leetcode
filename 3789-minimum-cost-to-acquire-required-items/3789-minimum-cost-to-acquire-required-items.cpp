class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        // if (costBoth <= cost1 || costBoth <= cost2) {
        //     return (long long)max(need1, need2) * costBoth;
        // }

        long long answer = 0;

        answer += (long long)need1 * cost1;
        answer += (long long)need2 * cost2;
        long long ans = 0;
        long long b = min(need1 , need2);
        ans += b*costBoth + (need1-b)*cost1 + (need2-b)*cost2 ;
        return min(ans,min(answer,(long long)max(need1, need2) * costBoth));
    }
};