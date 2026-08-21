class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int size=sequence.size();
        string c=word;
        int ans=0;
        while(sequence.find(c)!=string::npos)
        {
            ans++;
            c+=word;
        }
        return ans;
    }
};
