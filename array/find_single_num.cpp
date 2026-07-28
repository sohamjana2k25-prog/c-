class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int maxi=0;
        for (int i:nums){
            int occ = count(nums.begin(), nums.end(), i);
            if (occ==1){
                return i;
            }
        }
    return -1;
    }
};


//BETTER APPROACH
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto pair : freq) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        
        return -1;
    }
};
