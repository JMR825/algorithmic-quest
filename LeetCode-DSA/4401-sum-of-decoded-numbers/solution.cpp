class Solution {
public:
    long long POW(long long base,long long exp, long long mod){
        long long result=1;
        base%=mod;
        while(exp>0){
            if(exp&1){
                result=(result*base)%mod;
            }
            base=(base*base)%mod;
            exp>>=1;
        }
        return result;
    }
    int sumDecoded(vector<long long>& nums) {
        const long long MOD=1'000'000'007LL;
        vector<long long> array= nums;
        long long totalSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long num=array[i];
            int width=num%10;
            long long d=num/10;
            string s =to_string(d);
            string x_str=s.substr(0,width);
            string y_str=s.substr(width);
            long long x=stoll(x_str);
            long long y=stoll(y_str);
            
            long long value=POW(x,y,MOD);
            
            totalSum=(totalSum+value)%MOD;
        }
        return (int)totalSum;
    }
};
