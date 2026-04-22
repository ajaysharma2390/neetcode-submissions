class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int, int>mpp;

        for(int i = 0; i<n; i++){
            int cnt = target - nums[i];

            if( mpp.find(cnt) != mpp.end()){
                return {mpp[cnt], i};
            }

            mpp[nums[i]] = i;

        }

        return {};


        
    }
};
