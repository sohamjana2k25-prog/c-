class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s=nums.size();
        int k1;
        if (k<=s){
            k1=k;
        }
        else{
            k1=k%s;
        }
        vector<int> newVec;
        newVec.insert(newVec.end(), nums.begin(), nums.end());
        newVec.insert(newVec.end(), nums.begin(), nums.end());
        int j;
        int p=0;
        for (j=s-k1;j<s+s-k1;j++){
            nums[p]=newVec[j];
            p++;
        }
    }
};
