class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int ptr = nums[0];
        for(int i = 1; i<nums.size();i++) {
            ptr = ptr ^ nums[i];
        }
        return ptr;
    }
};
