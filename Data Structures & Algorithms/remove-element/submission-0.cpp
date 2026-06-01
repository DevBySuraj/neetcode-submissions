class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<size){
            if(nums[j] != val){
                swap(nums[i], nums[j]);
                i++;
                j++;
                count++;
            }
            else{
                j++;
            }
    }
    return count;
    }
};