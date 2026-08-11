class Solution {
public:
    void dfs(vector<vector<int>>& ans,vector<int>& nums,vector<int>& path,int start,
        vector<bool> used)
    {
        int n=nums.size();
        if(path.size()==n)
        {
            ans.push_back(path);
            return;
        }
        for(int i=0;i<n;i++)
        {
            //start
            
            if(used[i]==false ){
                if( i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                {
                    continue;
                }
            path.push_back(nums[i]);
            
            //recurse
            used[i]=true;
            dfs(ans,nums,path,i,used);
            //pop
            
            path.pop_back();
            used[i]=false;
                
            }
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> path;
        vector<bool> used(nums.size(),false);
        sort(nums.begin(),nums.end());
        dfs(ans,nums,path,0,used);
        return ans;    
    }
};
