/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

*/

// if leftBiased == 1
// first occuerence left most
// else right most last
int binarySearch(vector<int>& nums, int x,bool leftBiased){
    int ans = -1;
    int low = 0,high = nums.size()-1;
    while(low <= high){
        int mid = (low+high) /2;
        if(nums[mid] < x){
            low = mid+1;
        }
        else if(nums[mid] > x){
            high = mid-1;
        }
        else{
            if(leftBiased){
                ans = mid;
                high = mid-1;
            }
            else{
                ans = mid;
                low = mid+1;
            }
        }
    }
    return ans;
}
vector<int> searchRange(vector<int>& nums, int x) {
    int first = binarySearch(nums,x,1);
    int last = binarySearch(nums,x,0);
    return {first,last};
}
