class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> freq_s;
        unordered_map<char,int> freq_t;
        
        if(s.length()!=t.length())
        {
            return false;
        }
        for (char i:s)
        {
            freq_s[i]++;
        }
        for (char i:t)
        {
            freq_t[i]++;
        }
        if(freq_s==freq_t)
        {
            return true;
        }
        return false;      
        
    }
};
