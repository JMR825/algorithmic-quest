class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1=nums1.size(),n2=nums2.size();
        stack<int> st;
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<n2;i++)
        {
            int num=nums2[i];
            while(!st.empty() && num>st.top())
            {
                map[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
            while(!st.empty())
            {
                map[st.top()]=-1;
                st.pop();
            }
            for (int i = 0; i < n1; i++) 
            {
            ans.push_back(map[nums1[i]]);
            }
        
        return ans;
    }
};