class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums.at(0);
        int max_sum=nums.at(0);
        for(int i=1;i<nums.size();i++){
            curr_sum=max(nums.at(i),curr_sum+nums.at(i));
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
    }
};