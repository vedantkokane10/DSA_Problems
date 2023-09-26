/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

void sortColors(vector<int>& nums) {
    /* Method -1
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            count0++;
        }
        else if(nums[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }

    for(int i=0;i<count0;i++){
        nums[i] = 0;
    }
    for(int i=count0;i<count0+count1;i++){
        nums[i] = 1;
    }
    for(int i=count0+count1;i<nums.size();i++){
        nums[i] = 2;
    }
    */

    // Method - 2
    int mid = 0;
    int low = 0;
    int high = nums.size()-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    } 
}
