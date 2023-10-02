/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums of unique elements, return the minimum element of this array.
You must write an algorithm that runs in O(log n) time.

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
*/

int findMin(vector<int>& nums) {
    // int pivot = -1;
    // for(int i=0;i<nums.size()-1;i++){
    //     if(nums[i] > nums[i+1]){
    //         pivot = i;
    //         break;
    //     }
    // }

    // if(pivot == -1 && nums.size() != 0){
    //     return nums[0];
    // }

    // return nums[pivot+1];

    int low =0,high=nums.size()-1,ans=INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[low] <= nums[mid]){
            ans = min(ans,nums[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans,nums[mid]);
            high = mid - 1;
        }
    }
    return ans;

}
