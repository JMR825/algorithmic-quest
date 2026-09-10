class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int> candies;
        for(int x: candyType){
            candies.insert(x);
        }
        int x = candies.size();
        return n/2 < x ? n/2 : x;
    }
};
