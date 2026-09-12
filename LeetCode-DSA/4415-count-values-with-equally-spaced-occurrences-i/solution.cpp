class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int ,vector<int>> pos;
        
        for(int i=0;i<nums.size();i++){
            pos[nums[i]].push_back(i);
        }
        
        int ans=0;
        for(auto &p :pos){
            const vector<int> &indices = p.second;
            if(indices.size()!=3) continue;
            int first = indices[0];
            int second = indices[1];
            int third= indices[2];
            if(second - first == third - second){
                ans++;
            }
        }
        return ans;
    }
};
