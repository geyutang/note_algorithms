# 二分查找的问题
## 由于数组还是有序的，因此二分查找的效率是比较高的，因此使用二分 int mid = begin + (end - begin)/2, 直接除以2 还是挺好的，因为有时候使用移位运算可能导致越界
- 主要是对于边界条件还是有些问题，主要是来判断nums[begin], nums[mid],nums[end],三者之间的大小关系，主要考虑一下几种情况。
- begin <= mid < end 直接返回begin；
- end < begin < mid 这个时候应该将begin = mid +1;
- mid < end < begin 这个时候更新end = mid；
当然其中还有一些比较恶心的边界问题，肯定是需要考虑的。因此，这个问题，是要详细考虑。
