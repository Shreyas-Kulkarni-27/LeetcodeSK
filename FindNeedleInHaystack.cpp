class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        if (needle.size() > haystack.size()) {
            return -1;
        }
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            for (int j = 0; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
                if (j == needle.size() - 1) {
                    return i;
                }
            }
        }
        return -1;
    }
};

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.