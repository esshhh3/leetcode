class Solution {
public:

int distinctk(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;
    int s = 0;
    unordered_map<int,int> mpp;

    for(int e = 0; e < n; e++){
        mpp[nums[e]]++;

        while(mpp.size() > k){
            mpp[nums[s]]--;
            if(mpp[nums[s]] == 0){
                mpp.erase(nums[s]);
            }
            s++;
        }

        count += (e - s + 1);
    }

    return count;
}

int subarraysWithKDistinct(vector<int>& nums, int k) {
    return distinctk(nums, k) - distinctk(nums, k - 1);
}

};