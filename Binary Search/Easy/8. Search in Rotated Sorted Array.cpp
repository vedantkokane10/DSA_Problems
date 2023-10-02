/*
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2]
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

nt binarySearch(vector<int>& nums, int x,int s,int e){
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == x){
                return mid;
            }
            else if(nums[mid] > x){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return -1;
    }

    int binarySearch2(vector<int>& nums, int x){
        int low = 0,high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == x){
                return mid;
            }
            if(nums[low] <= nums[mid]){
                // left sorted
                if(nums[low] <= x && x <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }

            }
            else{
                // right sorted
                if(nums[mid] <= x && x <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        // int pivot = -1;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i] > nums[i+1]){
        //         pivot = i;
        //         break;
        //     }
        // }
        // cout<<pivot;
        // if(pivot == -1){
        //     int x = binarySearch(nums,target,0,nums.size()-1);
        //     return x;
        // }
        // int x = binarySearch(nums,target,0,pivot);
        // if(x == -1){
        //     x = binarySearch(nums,target,pivot+1,nums.size()-1);
        // }
        return binarySearch2(nums,target);
    }
