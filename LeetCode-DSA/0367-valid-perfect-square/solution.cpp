class Solution {
public:
    bool isPerfectSquare(int num) {
        int low =1;
        int high = num;
        while(low<=high){
            int mid = low+(high- low)/2;
            long long sq = (long long)mid*mid;
            if(sq>num) high = mid - 1;
            else if(sq<num) low= mid +1;
            else return true;
        }
        return false;
    }
};
