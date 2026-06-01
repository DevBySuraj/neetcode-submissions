class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int size = nums.size();

        for(int i =0; i<size; i++){
            mp[nums[i]] = i ; 
        }

        for(int i =0; i<size; i++){
            int x1 = nums[i];
            int value = target - x1;

            if(mp.find(value) != mp.end()){
                int returned_index = mp[value];

                if(i!= returned_index)
                return {i, returned_index};
            }
        }
        return {};
    }
};
