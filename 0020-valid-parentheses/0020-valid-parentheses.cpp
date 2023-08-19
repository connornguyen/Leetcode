class Solution {
public:
    bool isValid(string s) {
        stack<char> stack; 
        char top;
        for (char c : s) {
            if( c == '{' || c == '[' || c == '('){
                stack.push(c);
            }
            else{
                if(stack.empty() == true)return false;
                top = stack.top();
                stack.pop();
                if(top == '{' && c != '}')return false;
                if(top == '[' && c != ']')return false;
                if(top == '(' && c != ')')return false;
            }
        }
        return stack.empty();  
    }
};