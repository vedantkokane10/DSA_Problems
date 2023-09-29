/*
Given an integer array nums, find a 
subarray
 that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

*/

int maxProduct(vector<int>& nums) {
    // we can apply kadane algorithm 2 times
    // first in forward
    // second in reverse order
    int pre = 1,suf=1;
    int mx = INT_MIN,neg=0;
    for(int i=0;i<nums.size();i++){
        if(pre == 0){
            pre = 1;
        }
        pre *= nums[i];
        mx = max(mx,pre);
        
    }       
    for(int i=nums.size()-1;i>=0;i--){
        if(suf == 0){
            suf = 1;
        }
        suf *= nums[i];
        mx = max(mx,suf);
    }  
    return mx;
}
