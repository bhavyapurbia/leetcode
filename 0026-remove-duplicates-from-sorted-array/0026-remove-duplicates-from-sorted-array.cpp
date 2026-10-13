class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 1;
        int i = 0;

        while(n + i < nums.size()){
            if(nums[i] != nums[i+n]){
                swap(nums[i+n], nums[i+1]);
                i++;
            }
            else
            n++;
        }
        return i+1;
    }
};