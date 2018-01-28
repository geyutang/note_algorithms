class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        if(size <= 0) {
            return -1;
        }
        int begin = 0, end = size-1;
        while(begin <= end){
            int mid = begin + (end - begin)/2;
            if (nums[mid] == target)
                return mid;
            if(nums[begin] <= nums[mid]){
                if(nums[begin] <= target && target < nums[mid]){
                    end = mid - 1;
                }else {
                    begin = mid + 1;
                }
            }else{
                if(nums[mid] < target && target <= nums[end]){
                    begin = mid + 1;
                }else {
                    end = mid -1;
                }
            }
        }
        return -1;
    }
};
