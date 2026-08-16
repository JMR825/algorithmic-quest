class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        int n=s.size();
        vector<string> ans;
        unordered_map<string,int> freq;
        for(int i=0;i<=n-10;i++)
        {
            int count =0;
            string  m;
            while(count<10)
            {
                m+=s[i + count];
                count++;
            }
            freq[m]++;
            if(freq[m]==2)
            ans.push_back(m);
        }
        return ans;
    }
};
