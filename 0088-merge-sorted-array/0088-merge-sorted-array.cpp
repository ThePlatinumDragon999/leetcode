class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int writePointer = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while (i >= 0 && j >= 0) {
            int firstArrPointer = nums1[i];
            int secondArrPointer = nums2[j];
            if (firstArrPointer >= secondArrPointer) {
                nums1[writePointer] = firstArrPointer;
                --i;
                --writePointer;
            } else {
                nums1[writePointer] = secondArrPointer;
                --j;
                --writePointer;
            }
        }

        if (i < 0) {
            while (j >= 0) {
                nums1[writePointer] = nums2[writePointer];
                --j;
                --writePointer;
            }
        }
    }
};