class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //prefix sum with hashmap solution
        int size = nums.size();
        int sum = 0;
        int prefix = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count = 0;
        for(int i =0; i<size; i++){
            sum += nums[i];
            int remain = sum - k;
            count += mp[remain];
            mp[sum]++;
        }
        return count;
    }
};