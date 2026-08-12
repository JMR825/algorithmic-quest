class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }

        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        vector<int> current;
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for (int i = 1; i < n; i++) {
            vector<int> last = ans.back();
            current = intervals[i];
            if (current[0] <= last[1]) {
                ans.back()[1] = max(last[1], current[1]);
            }
            else {ans.push_back(current);}
        }
        return ans;
    }
};
