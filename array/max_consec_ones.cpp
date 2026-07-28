class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int maxi=0;    
        for (int i : nums){
            if (i==1){
                curr++;
                maxi=max(maxi,curr);
            }
            else curr=0;
        }
        return maxi;
    }
};
