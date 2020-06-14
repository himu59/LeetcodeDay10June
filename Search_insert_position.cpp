class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x = 0;
        if(!binary_search(nums.begin(),nums.end(),target)){
            if(target > nums[nums.size()-1]) return nums.size();
            
            x = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            if(x == 0) return 0;
        }
        else{
            int x = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            return x;
        }
        return x;
    }
};
