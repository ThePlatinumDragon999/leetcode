class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size() - 1;
        int left = 0;

        while (left != right) {
            int middle = left + (right - left) / 2 + 1;
            
            if (nums[middle] > target) {
                right = middle - 1;
            }
            else {
                left = middle;
            }

            if (nums[left] == target) {
                return left;
            }
        }

        if (nums[left] >= target) {
            return left;
        }

        return left + 1;
    }
};