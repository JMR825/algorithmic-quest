class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n=temperatures.size();
        stack<int> indices;
        vector<int> result(n,0);
        for(int curr=0;curr<n;curr++)
        {
            
            while(!indices.empty() && temperatures[curr]>temperatures[indices.top()])
            {
                int prev=indices.top();
                indices.pop();
                result[prev] = curr - prev;
            }
            indices.push(curr);
        }
        return result;
    }
};
