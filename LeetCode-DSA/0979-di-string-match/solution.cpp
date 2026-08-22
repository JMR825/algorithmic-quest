class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int> perm (n+1,0);
        int low=0;
        int high=n;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='I')
            {
                perm[i]=low;
                low++;
            }
            if(s[i]=='D')
            {
                perm[i]=high;
                high--;
            }
        }
        perm[n] = low; 
        return perm;
    }
};
