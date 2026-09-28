class Solution {
public:
    int maxDepth(string s) {
        int n= s.size();
        bool is_parenthese = false;
        int max_count=0;
        int count=0;
        for(char c: s){
            if(c=='('){
                count++;
                max_count = max(max_count,count);
            }
            else if(c ==')') count--;
        }
        return max_count;
    }
};
