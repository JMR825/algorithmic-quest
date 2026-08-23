class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> result;
        vector<int> valid;

        for(int num: nums)
            {
                if(num>=lower && num<=upper)
                valid.push_back(num);
            }
        sort(valid.begin(),valid.end());
        valid.erase(unique(valid.begin(),valid.end()),valid.end());
        long expected=lower;
        for(int num: valid){
            if(num>expected){
                result.push_back({static_cast<int>(expected),num-1});
            }
            expected=static_cast<long>(num)+1;
        }
        if(expected<=upper){
            result.push_back({static_cast<int>(expected),upper});
        }
        return result;        
    }
};
