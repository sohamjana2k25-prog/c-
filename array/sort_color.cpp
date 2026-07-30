class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z_count=0;
        int o_count=0;
        int t_count=0;
        int c=0;
        for (int i=0;i<nums.size();i++){
        if (nums[i]==0){z_count++;}
        else if (nums[i]==1){o_count++;}
        else t_count++;
        }
        o_count=o_count+z_count;
        t_count=t_count+o_count;
        for (int j=0;j<nums.size();j++){
            if (c<z_count){
                nums[c]=0;
                c++;
            }
            else if (c<o_count){
                nums[c]=1;
                c++;
            }
            else{ 
                nums[c]=2;
                c++;
            }
        }
    }
};
