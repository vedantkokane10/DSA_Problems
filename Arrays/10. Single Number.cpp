/* 
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Input: nums = [2,2,1]
Output: 1
*/
int singleNumber(vector<int>& nums) {
    int xor1=0;
    for(int i=0;i<nums.size();i++){
        xor1 = xor1^nums[i];
    }
    return xor1;
}

