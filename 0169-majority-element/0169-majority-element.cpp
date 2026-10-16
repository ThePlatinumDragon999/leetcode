class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int size = nums.size(); // Added missing semicolon
        for (int i = 0; i < size; ++i) {
            ++count[nums[i]];
        }

        if (!count.empty()) {
            auto max_it = std::max_element(
                count.begin(), 
                count.end(),
                [](const auto& p1, const auto& p2) {
                    return p1.second < p2.second;
                }
            );

            return max_it->first;
        }
        
        return -1;
    }
};