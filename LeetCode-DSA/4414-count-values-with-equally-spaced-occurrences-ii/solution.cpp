class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, vector<int>> pos;
        int ans=0;
        for(int i=0;i< n;i++){
            pos[nums[i]].push_back(i);
        }
        for(auto &p:pos){
            const vector<int> &indices = p.second;
            if(indices.size()<3) continue;
            int first = indices[0];
            int second= indices[1];
            int third = indices[2];
            int diff = second- first;
            bool true_or_false = true;
            
            for(size_t i=2;i<indices.size();i++){
            if(indices[i] - indices[i-1] != diff){
                true_or_false = false;
                break;
            }
            }
            if(true_or_false){
                ans++;
            }
        }
        return ans;
    }
};
