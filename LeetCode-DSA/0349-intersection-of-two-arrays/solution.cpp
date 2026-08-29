class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;
        unordered_set<int> set;
        unordered_set<int> added;
        for (int i : nums1) {
            set.insert(i);
        }
        for (int i : nums2) {
            if (set.count(i) && !added.count(i)) {
                intersect.push_back(i);
                added.insert(i);
            }
        }
        return intersect;
    }
};
