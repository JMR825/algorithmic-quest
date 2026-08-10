class Solution {
public:
    void dfs(vector<vector<int>>& ans,vector<int>& path,vector<int>& candidates, int target,int start, int sum)
    {
        int n=candidates.size();
        if(target==0)
        {
            ans.push_back(path);
            return;
        }
        for(int i=start;i<n;i++)
        {
            if(target<candidates[i]) break;
            if(i>start && candidates[i]==candidates[i-1])
            continue;
            path.push_back(candidates[i]);
            dfs(ans,path,candidates,target-candidates[i],i+1,sum);
            path.pop_back();
            
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        
        vector<vector<int>> ans;
        vector<int> path;
        sort(candidates.begin(),candidates.end());
        dfs(ans,path,candidates,target,0,0);
        return ans;
    }
};
