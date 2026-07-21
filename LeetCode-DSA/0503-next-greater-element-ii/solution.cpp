class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
            stack<int> st;
            int N=nums.size();
            vector<int> ans(N,-1);
            for(int i=0;i<2*N;i++)
            {
                int circular_idx=i%N;
                int num=nums[circular_idx];
            //when there are elements
            while(!st.empty() && nums[st.top()]<num)
            {
                
                ans[st.top()]=num;
                st.pop();
            }
            //when no elements in stack
            if(i<N)
            st.push(circular_idx);
            }
            return ans;
    }
};
