class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& path,vector<bool>& used,vector<int>& nums)
    {
        int n=nums.size();
        if(path.size()==n){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<n;i++)
        {
        if(used[i]==false)
        {
        used[i]=true;
        path.push_back(nums[i]);
        helper(ans,path,used,nums);
        path.pop_back();
        used[i]=false;
        }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    
    {
        vector<vector<int>> ans;
        vector<int> path;
        int n=nums.size();
        vector<bool> used(n,false);
        helper(ans,path,used,nums);
 return ans;
    }
   
};
