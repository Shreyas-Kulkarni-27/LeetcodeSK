#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        // Mapping of digits to letters
        std::vector<std::string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        // base case and output return
        std::vector<std::string> result;
        if (digits.empty()) return result; //return as is[]

        //If we have any digits in input for that another string in which resursive iteration will be kept
        std::string currentCombination;
        backtrack(result, mapping, digits, currentCombination, 0);
        return result;
    }
    private:
    void backtrack(std::vector<std::string>& result, const std::vector<std::string>& mapping,
                   const std::string& digits, std::string& currentCombination, int index) {
        // If the current combination length matches the number of digits, add it to the result
        if (currentCombination.length() == digits.length()) {
            result.push_back(currentCombination);
            return;
        }
        
        // Get the current digit and its corresponding letters
        int digit = digits[index] - '0'; // Convert char to int
        const std::string& letters = mapping[digit];
        
        // Iterate through the letters for the current digit
        for (char letter : letters) {
            // Append the letter of index 0 in current
            currentCombination.push_back(letter);
            
            // explore combinations with current +1
            backtrack(result, mapping, digits, currentCombination, index + 1);
            
            // Backtrack by removing the last letter
            currentCombination.pop_back();
        }
    }
};