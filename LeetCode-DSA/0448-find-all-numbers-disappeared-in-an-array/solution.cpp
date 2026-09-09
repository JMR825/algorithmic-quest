class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        vector<int> number;
        vector<bool> present(n+1,false);
        for(int x :nums){
            present[x] = true;
        }
        for(int i=0;i<n;i++){
            if(!present[i+1]){
                number.push_back(i+1);
            }
        }
        return number;
    }
};
