class Solution {
public:
    string getHint(string secret, string guess) {
        int n= secret.size();
        unordered_map<char,int> secret_freq;
        unordered_map<char,int> guess_freq;
        string ans;
        int bulls =0;
        int cows =0;
        //positions
        for(int i =0;i<n;i++){
            
            if(secret[i]==guess[i]) bulls++;
            else
            {
                secret_freq[secret[i]]++;
                guess_freq[guess[i]]++;
            }
        }
        for (char d = '0'; d <= '9'; d++) {
            cows+=min(secret_freq[d],guess_freq[d]);
        }
        ans = to_string(bulls)+"A"+to_string(cows)+"B";
        return ans;
    }
};
