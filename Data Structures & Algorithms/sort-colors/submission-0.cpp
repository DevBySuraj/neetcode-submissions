class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        int j = 0;

        while(j<size){
            if(nums[j] != 0){
                j++;
            }
            else{
                swap(nums[i], nums[j]);
                i++, j++;
            }
        }
        j = i;
        while(j<size){
            if(nums[j] != 1){
                j++;
            }
            else{
                swap(nums[i], nums[j]);
                i++, j++;
            }
        }
    }
};