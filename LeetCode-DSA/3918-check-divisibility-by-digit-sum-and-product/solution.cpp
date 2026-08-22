class Solution {
public:
    bool checkDivisibility(int n) 
    {
        if (n <= 0) return false; 
        int num=n;
        int sum=0;
        int product=1;
        while(num>0)
        {
            int digit = num % 10;
            sum+=digit;
            product*=digit;
            num/=10;
        }
        long total= sum+product;
        
         return (n % total == 0);
    }
};
