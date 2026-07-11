class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size(), n2 = nums2.size();

        set<int> st;
        unordered_map<int, int> mp;
        for (int i = 0; i < n1; i++) {
            mp[nums1[i]]++;
        }
        for (int i = 0; i < n2; i++) {
            if (mp.find(nums2[i]) != mp.end()) {
                st.insert(nums2[i]);  
            }
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};