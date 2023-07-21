class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> store;
        int n = nums.size();
        int req;
        for(int i =0; i<n; i++){
            req = target- nums[i];
            if(store.find(req)!=store.end())
            {
                ans.push_back(store[req]);
                ans.push_back(i);
                break;
            }
            store[nums[i]] =i;

        }
        return ans;
        
    }

};