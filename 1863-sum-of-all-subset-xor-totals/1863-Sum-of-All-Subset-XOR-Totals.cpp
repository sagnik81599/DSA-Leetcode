class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int totalsum = 0;

        for(int i=0;i<nums.size();i++){
            totalsum |= nums[i];
        }

        return totalsum << (nums.size()-1);
    }
};