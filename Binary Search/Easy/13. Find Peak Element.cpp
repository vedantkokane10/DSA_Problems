/*
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
*/

int findPeakElement(vector<int>& nums) {
    int low= 0 ,high = nums.size()-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(mid > 0 && (nums[mid-1] > nums[mid])){
            high = mid-1;
        }
        else if(mid < nums.size()-1 && (nums[mid+1] > nums[mid])){
            low = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
