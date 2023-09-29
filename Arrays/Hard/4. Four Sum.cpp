/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    //  vector<vector<int>> v1;
    //  set<vector<int>> s1;
    //  sort(nums.begin(),nums.end());
    //  for(int i=0;i<nums.size();i++){
    //      for(int j=i+1;j<nums.size();j++){
    //          long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
    //          int low = j+1;
    //          int high = nums.size() - 1;
    //          while(low<high){
    //              if(newTarget > nums[low]+nums[high]){
    //                  low++;
    //              }
    //              else if(newTarget < nums[low]+nums[high]){
    //                  high--;
    //              }
    //              else{
    //                  s1.insert({nums[i],nums[j],nums[low],nums[high]});
    //                  high--;
    //                  low++;
    //              }
    //          }
             
    //      }
    //  }

    //  for(auto x:s1){
    //      v1.push_back(x);
    //  }
    //  return v1;

    vector<vector<int>> v1;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        for(int j=i+1;j<nums.size();j++){
            if(j > i+1 && nums[j] == nums[j-1]){
                 continue;
            }
            int k = j+1;
            int l = nums.size() - 1;
            while(k<l){
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target){
                    v1.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    while(k<l && nums[k] == nums[k-1]){
                        k++;
                    }
                    while(k<l && nums[l] == nums[l+1]){
                        l--;
                    }
                }
                else if(sum < target){
                    k++;
                }
                else {
                    l--;
                }
            }
        }
    }
    return v1;
}
