class Solution {
public:
    bool isValid(string s) {
        std::stack<char> parenStack;

        for (size_t i = 0; i < s.size(); ++i) 
        {
            char curChar = s[i];
            if (curChar == '(' || curChar == '{' || curChar == '[')
            {
                parenStack.push(curChar);
            }
            else 
            {
                if (parenStack.empty()) 
                {
                    return false;
                }

                if (curChar == ')' && parenStack.top() != '(')
                {
                    return false;
                }

                if (curChar == '}' && parenStack.top() != '{') 
                {
                    return false;
                }

                if (curChar == ']' && parenStack.top() != '[') 
                {
                    return false;
                }

                parenStack.pop();
            }
        }

        return parenStack.empty();
    }
};