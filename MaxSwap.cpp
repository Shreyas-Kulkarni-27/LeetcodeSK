class Solution {
public:
    int maximumSwap(int num) {
        // Convert the number to a string to work with individual digits
        string str = to_string(num);
        int n = str.size();
        
        // Traverse starting from the first index and find the largest digit to swap with the current index
        for (int i = 0; i < n; i++) {
            // Find the maximum digit from the rest of the string
            char maxDigit = str[i];
            int maxIndex = i;
            
            // Look for the maximum digit from the remaining part of the string
            for (int j = i + 1; j < n; j++) {
                // We only update maxDigit if we find a larger digit or the same digit with a higher index
                if (str[j] >= maxDigit) {
                    maxDigit = str[j];
                    maxIndex = j;
                }
            }
            
            // If the max digit is greater than the current digit, swap them
            if (maxDigit > str[i]) {
                swap(str[i], str[maxIndex]);
                return stoi(str);  // Return the integer after swap
            }
        }
        
        // If no swaps were made, return the original number
        return num;
    }
};

// You are given an integer num. You can swap two digits at most once to get the maximum valued number.

// Return the maximum valued number you can get.

 

// Example 1:

// Input: num = 2736
// Output: 7236
// Explanation: Swap the number 2 and the number 7.
// Example 2:

// Input: num = 9973
// Output: 9973
// Explanation: No swap.