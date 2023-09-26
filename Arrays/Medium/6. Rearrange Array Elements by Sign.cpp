/*
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should rearrange the elements of nums such that the modified array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
*/
vector<int> rearrangeArray(vector<int>& nums) {
    /* Method - 1
    vector<int> p;
    vector<int> n;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0){
            p.push_back(nums[i]);
        }else{
            n.push_back(nums[i]);
        }
    }

    int i=0,j=0,k=0;
    while(k<nums.size()){
        if(k%2 == 0){
            nums[k]  = p[i];
            i++;
        }else{
            nums[k] = n[j];
            j++;
        }
        k++;
    }
    return nums; 
    Space here is (2N)
    */

   // optinal

   vector<int> a;
   for(int i=0;i<nums.size();i++){
       a.push_back(0);
   }
   int n=1,p=0;
   for(int i=0;i<nums.size();i++){
       if(nums[i] < 0){
           a[n] = nums[i];
           n = n +2;
       }
       else{
           a[p] = nums[i]; 
           p = p+2;
       }
   }
   return a;
}
