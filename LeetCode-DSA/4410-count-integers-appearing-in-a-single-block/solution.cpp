class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        unordered_map<int,int>first;
        unordered_map<int,int> last;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
            if(first.find(nums[i])==first.end()) 
                first[nums[i]]=i;
            last[nums[i]]=i;
        }
        int specialCount =0;
        for(auto x:map){
            int val=x.first;
            int f=first[val];
            int l=last[val];
            bool isSpecial=true;
            for(int i=f;i<=l;i++){
                if(nums[i]!=val){
                    isSpecial=false;
                    break;
                }
                
            }
            if(isSpecial) specialCount++;            
        }
        return specialCount;
    }
};
