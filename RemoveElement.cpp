#include <vector>
#include <algorithm> 
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int j = nums.size() - 1; 
        for (int i = 0; i <= j;) {
            if (nums[i] == val) {
                while (j >= 0 && nums[j] == val) { 
                    j--; 
                }
                if (j > i) {
                    std::swap(nums[i], nums[j]);
                }
            }
            i++; 
        }
        return j + 1; 
    }
};

// Example 1:

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 2.
// It does not matter what you leave beyond the returned k (hence they are underscores).