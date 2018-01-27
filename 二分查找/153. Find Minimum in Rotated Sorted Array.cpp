class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int begin = 0, end = size - 1;
        while(begin < end){
            int mid = begin + (end - begin)/2;
            //算是一个循环中止条件
            if(nums[begin] < nums[end]){
                return nums[begin];
            }
            if(nums[begin] <= nums[mid]){
                begin = mid + 1;
            }else{
                end = mid;
            }
        }
        return nums[begin];
    }
};
