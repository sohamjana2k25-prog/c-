class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> combovec(n+n);
        int i;
        for (i=0;i<n;i++){
            combovec[i]=nums[i];
            combovec[i+n]=nums[i];
        }
        int j;
        int mis=0;
        for (j=0;j<2*n-1;j++){
            if(combovec[j]>combovec[j+1]){
                mis++;
            }
        }
        if (mis<=2){
            return true;
        }
        return false;
    }
    
};
