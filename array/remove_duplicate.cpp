class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>dupl;
        int i;
        int count=1;
        dupl.push_back(nums[0]);
        for (i=0;i<nums.size()-1;i++){
            if (nums[i]!=nums[i+1]){
                dupl.push_back(nums[i+1]);
                count++;
            }
        }
        for(int diff=nums.size()-count+1;diff<nums.size();diff++){
            dupl.push_back(0);
        }
        nums=dupl;
        return count;
    }
};
