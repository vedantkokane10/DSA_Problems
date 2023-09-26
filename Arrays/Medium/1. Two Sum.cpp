/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

vector<int> twoSum(vector<int>& nums, int target) {
  
  /* 
  Method - 1
  unordered_map<int,int> mp;
  for(int i=0;i<nums.size();i++){
      int a = nums[i];
      int rem = target - nums[i];
      if(mp.find(rem) != mp.end()){
          return {i,mp[rem]};
      }
      else{
          mp[nums[i]] = i;
      }
  }
  return {-1,-1};
  
  */
  
  /*
  Method - 2
  vector<pair<int,int>> vt;
  for(int i=0;i<nums.size();i++){
      vt.push_back(make_pair(nums[i],i));
  }
  sort(vt.begin(),vt.end());
  int left=0;
  int right = nums.size()-1;
  while(left < right){
      int a = vt[left].first;
      int b = vt[right].first;
  
      if(a+b == target){
          return {vt[left].second, vt[right].second};
      }
      else if(a+b < target){
          left++;
      }
      else{
          right--;
      }
  }
  return {-1,-1};
  */
  
  unordered_map<int,int> mp;
  for(int i=0;i<nums.size();i++){
      int rem = target -nums[i];
      if(mp.find(rem) != mp.end()){
          return {mp[rem],i};
      }
      else{
          mp[nums[i]] = i;
      }
  }
  return {-1,-1};
  
  
  }
