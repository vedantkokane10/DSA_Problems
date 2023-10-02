/*
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.
You must decrease the overall operation steps as much as possible.

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false
*/

bool binarySearch(vector<int>& nums, int x,int s,int e){
    while(s<=e){
        int mid = (s+e)/2;
        if(nums[mid] == x){
            return 1;
        }
        else if(nums[mid] > x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return 0;
}
bool search(vector<int>& nums, int target) {
  int pivot = -1;
  for(int i=0;i<nums.size()-1;i++){
      if(nums[i] > nums[i+1]){
          pivot = i;
          break;
      }
  }
  cout<<pivot<<endl;
  if(pivot == -1){
      return binarySearch(nums,target,0,nums.size()-1);
  }
  if(binarySearch(nums,target,0,pivot) == 0){
      return binarySearch(nums,target,pivot+1,nums.size()-1);
  }
  return 1;
  }
