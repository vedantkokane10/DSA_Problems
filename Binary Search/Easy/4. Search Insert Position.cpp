/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [1,3,5,6], target = 5
Output: 2

Input: nums = [1,3,5,6], target = 2
Output: 1
*/

// lower bound function

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size()-1,ans=nums.size();
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
