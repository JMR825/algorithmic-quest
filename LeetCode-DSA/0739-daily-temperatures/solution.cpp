class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
            stack<int> st;
            vector<int> ans(temperatures.size(),0);
            for(int i=0;i<temperatures.size();i++)
            {
                int curr=temperatures[i];
                while(!st.empty() && temperatures[st.top()]<curr)
            {
                int popped=st.top();
                ans[popped] = i - popped;
                st.pop();
            }
            st.push(i);
            }
        return ans;
    }
};
