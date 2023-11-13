class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> targetVector(nums1.size() + nums2.size());

        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), targetVector.begin());
        sort(targetVector.begin(), targetVector.end());

        int vectorSize = targetVector.size();

        if (vectorSize % 2 == 0) {
            double first = targetVector[vectorSize / 2 - 1];
            double second = targetVector[vectorSize / 2];

            return (first + second) / 2;
        } else {
            return targetVector[vectorSize / 2];
        }
    }
};
