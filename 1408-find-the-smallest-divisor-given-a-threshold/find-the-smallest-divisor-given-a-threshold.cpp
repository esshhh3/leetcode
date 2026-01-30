class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long total = 0;
            for (int x : nums) {
                total += (x + mid - 1) / mid;
            }

            if (total <= threshold)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
