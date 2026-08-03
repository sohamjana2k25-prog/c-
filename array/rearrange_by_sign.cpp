//BRUTE FORCE
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>evenv;
       vector<int>oddv;
       for (int i=0;i<nums.size();i++){
        if (nums[i]>=0){
            evenv.push_back(nums[i]);
        }
        else{
            oddv.push_back(nums[i]);
        }
       }
    for (int j = nums.size() - 2; j >= 0; j = j - 2) {
            nums[j + 1] = oddv.back();
            oddv.pop_back(); 

            nums[j] = evenv.back();
            evenv.pop_back(); 
        }
       return nums;
    }
};

//OPTIMAL
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int posIndex = 0; // Even indices: 0, 2, 4, ...
        int negIndex = 1; // Odd indices:  1, 3, 5, ...

        for (int num : nums) {
            if (num > 0) {
                result[posIndex] = num;
                posIndex += 2;
            } else {
                result[negIndex] = num;
                negIndex += 2;
            }
        }

        return result;
    }
};
