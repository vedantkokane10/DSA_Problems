/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Input: nums = [1,1,1], k = 2
Output: 2
*/


int subarraySum(vector<int>& nums, int k) {
      //brute force
      // int n = 0;
      // for(int i=0;i<nums.size();i++){
      //     int sum = 0;
      //     for(int j=i;j<nums.size();j++){
      //         sum = sum + nums[j];
      //         if(sum == k){
      //             n++;
      //         }
      //     }
      // }
      // return n;

      //optimal
      unordered_map<int,int> mp;
      mp[0] = 1;
      int prefixsum= 0,c=0;
      for(int i=0;i<nums.size();i++){
          prefixsum += nums[i];
          int rem = prefixsum - k;
          c += mp[rem];
          mp[prefixsum]++;
      }
      return c;
  }
