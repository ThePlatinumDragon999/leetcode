class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int readIndex = 0;
        int writeIndex = 1;

        int curElement = nums[readIndex];

        size_t upperLim = nums.size();

        while (readIndex < upperLim) 
        {
            if (nums[readIndex] != curElement) 
            {
                curElement = nums[readIndex];
                nums[writeIndex] = curElement;
                ++writeIndex;
            }

            ++readIndex;
        }

        return writeIndex;
    }
};