class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char,char> umap = {{')','('},{'}','{'},{']','['}};

        std::stack<char> stack;

        for (char c:s){
            if (c == '(' || c == '{' || c == '['){
                stack.push(c);
            }else if (c == ')' || c == '}' || c == ']'){
                if (stack.empty() || stack.top() != umap[c]){
                    return false;
                }
                stack.pop();
            }    
        }     
    return stack.empty();
    }
};

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"

// Output: true

// Example 2:

// Input: s = "()[]{}"

// Output: true

// Example 3:

// Input: s = "(]"

// Output: false

// Example 4:

// Input: s = "([])"

// Output: true

