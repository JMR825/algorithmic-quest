class Solution {
public:
    void helper(vector<int>& nums,int index,vector<int> current,vector<vector<int>>& ans)
    {
        if(index==nums.size())
        {
            ans.push_back(current);
            return;
        }
        //take the change
        current.push_back(nums[index]);
        helper(nums,index+1,current,ans);
        current.pop_back();
        //skip the change
        helper(nums,index+1,current,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int index=0;
        vector<int>current;
        vector<vector<int>> ans;
        helper(nums,index,current,ans);

        return ans;
        
    }
};
