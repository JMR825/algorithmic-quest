class Solution {
public:
int sumOfDigits(int n){
    int sum=0;
            int x=n;
            while(x>0){
                int digit=x%10;
                sum=sum+digit*digit;
                x=x/10;
            }
            return sum;
}
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n=sumOfDigits(n);
        }
        if(n==1) return true;
        return false;
    }
};
