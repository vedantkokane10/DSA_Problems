/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
*/

int search(vector<int>& nums, int target) {
    int s = 0,e=nums.size() -1;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target){
            e = mid-1;
        }
        else if(nums[mid]<target){
            s = mid+1;
        }
    }
    return -1;
}
