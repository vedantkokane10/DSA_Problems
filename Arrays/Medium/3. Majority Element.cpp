/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.

Input: nums = [3,2,3]
Output: 3
*/

int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int x = nums[0],c=1;
    int n = nums.size()/2;
    for(int i=1;i<nums.size();i++){
        if(x != nums[i]){
            if(c > n){
                return x;
            }
            else{
                c = 1;
                x = nums[i];
            }
        }
        c++;
    }
    return x;
    // moore voting algo
    // int x,c=0;
    // for(int i=0;i<nums.size();i++){
    //    if(c == 0){
    //        c = 1;
    //        x = nums[i];
    //    }
    //    else if(nums[i] == x){
    //        c++;
    //    }
    //    else{
    //        c--;
    //    }
    // }
    // return x;
}
