class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& path,vector<int>& candidates, int target,int start)
    {
        if(target==0)
        {
            ans.push_back(path);
            return;
        }
        //take it
        for(int i=start;i<candidates.size();i++ )
        {
            if(candidates[i]>target) continue;
            int num=candidates[i];
            path.push_back(num);
            helper(ans,path,candidates, target- num ,i);
            path.pop_back();
        }        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> path;
        int start=0;
        helper(ans,path,candidates, target ,start);
        return ans;
    }
    
};
