class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stack;
        for(auto& c:s)
        {
            if(c=='('||c=='{'||c=='[')
            stack.push(c);
            if(c==')')
            {
                if(stack.empty()) return false;
                if(stack.top()=='(')
                stack.pop();
                else return false;
            }
            if(c==']')
            {
                if(stack.empty()) return false;
                if(stack.top()=='[')
                stack.pop();
                else return false;
            }
            if(c=='}')
            {
                if(stack.empty()) return false;
                if(stack.top()=='{')
                stack.pop();
                else return false;
            }
        }
        if(stack.empty()) return true;
        return false;}
};
