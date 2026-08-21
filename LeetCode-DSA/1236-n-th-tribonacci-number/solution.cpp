class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        vector<int> store(n+2,0);
        store[0]=0;
        store[1]=1;
        store[2]=1;
        for(int i=3;i<=n;i++)
        { // store[3]=store[0]+store[1]+store[2]
        // store[n]=store[n-3]+store[n-2]+store[n-1]
            store[i]=store[i-3]+store[i-2]+store[i-1];
        }
        return store[n];
    }
};
