class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int>freq(nums.size());
        int diff=0;
        int idx;
        int l=nums.size();
        for (int i=l-1;i>=0;i--){
            idx=0;
            diff=0;
            for (int j=i;j>=0;j--){
                int cost = nums[i] - nums[j]; 
                if (diff + cost <= k) {
                    diff += cost;
                    idx++;
                } else {
                    break;
                }
            }
            freq[i]=idx;
        }
        return *max_element(freq.begin(),freq.end());
    }
};
