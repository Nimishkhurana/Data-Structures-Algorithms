class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = numeric_limits<int> :: min();
        
        // modified Kadane's algo
        for(int i = 0; i < nums.size(); i++) {
            // check the max of current sum including current number
            // or the number alone. This is when there were negative numbers previously 
            // and the current number is greater when added with that sum
			
            curr_sum = max(curr_sum + nums[i], nums[i]);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};