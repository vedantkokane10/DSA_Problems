// kadane algorithm
/* 
Given an integer array nums, find the  subarray with the largest sum, and return its sum.

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/

int maxSubArray(vector<int>& nums) {
   int sum=0,mx=INT_MIN;
   for(int i =0;i<nums.size();i++){
       sum =sum+nums[i];
       mx = max(mx,sum);
       if(sum <0){
           sum = 0;
       }
   }
   return mx;
}   
