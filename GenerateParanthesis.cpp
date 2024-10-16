class Solution {
public:
    void generateParenthesisHelper (int open_rem, int close_rem, string s, vector<string>& ans){ 
        // get cuurent string s and ans vector, open and close numbers
        if (open_rem == 0 && close_rem == 0){ //If no more open or close can be added
            ans.push_back(s);
            return;             //return 
        }
        if (open_rem > 0 ){     //If open can be added i.e if n=3 and current open=2 we can still add '('
            generateParenthesisHelper(open_rem-1,close_rem,s + "(",ans);
        }
        if (open_rem < close_rem ){    //If no more open can be added i.e n=2 and open=2 we can just close ')'
            generateParenthesisHelper(open_rem,close_rem-1,s + ")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s = "";
        generateParenthesisHelper(n,n,s,ans);
        return ans;
    }
};

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]