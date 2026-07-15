class Solution {
    int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n ;
        int sumeven = (n*(n+1));
        int ans = gcd(odd , sumeven);
        return ans;
    }
};