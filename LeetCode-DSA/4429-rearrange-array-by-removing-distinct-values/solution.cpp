class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        map<int,int> freq;
        vector<int> ans;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        while(true){
            int added= 0;
            for(auto& [value,count]:freq){
                if(count > 0){
                    ans.push_back(value);
                    count--;
                    added++;
                }
            }
            if(added==0) break;
        }
        
        return ans;
    }
};
