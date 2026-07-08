class Solution {
public:

    void backtrack(const vector<int> &nums, int index,int currentor, int maxor, int &count) {
       
        if (currentor == maxor) {
            count++;
        }
        int n = nums.size();
        for (int i = index; i < n; i++) {
            backtrack(nums,i + 1,currentor | nums[i], maxor, count);
        }
    }


    int countMaxOrSubsets(vector<int> &nums) {
        int maxor = 0;

        for (int num : nums) {
            maxor |= num;
        }
        int count = 0;

        backtrack(nums, 0, 0, maxor, count);

        return count;
    }
};