class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int rem;
        unordered_map<int,int> mappings;
        for(int i=0;i<nums.size();i++){
            rem = target - nums[i];
            if(mappings.count(rem)>0){
                
                res.push_back(mappings[rem]);
                res.push_back(i);
            }
            else
                mappings[nums[i]] = i;
            
        }
        return res;
    }
};