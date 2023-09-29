/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
*/

vector<vector<int>> threeSum(vector<int>& nums) {
    // vector<vector<int>>  v1;
    // set<vector<int>> s1;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         for(int k=j+1;k<nums.size();k++){
    //             if(nums[i]+nums[j]+nums[k] == 0){
    //                  s1.insert({nums[i],nums[j],nums[k]});
    //             }
    //         }
    //     }
    // }
    // for(auto x : s1){
    //     v1.push_back(x);
    // }
    // return v1;

    // better 
    // vector<vector<int>> v1;
    // set<vector<int>> s1;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size();i++){
    //     set<int> hash;
    //     for(int j=i+1;j<nums.size();j++){
    //         int k = -(nums[i] + nums[j]);
    //         if(hash.find(k) != hash.end()){
    //             s1.insert({nums[i],nums[j],k});
    //         }
    //         hash.insert(nums[j]);
    //     }
    // }
    // for(auto x : s1){
    //     v1.push_back(x);
    // }
    // return v1;

    // optimal
    vector<vector<int>> v1;
    sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size();i++){
    //     int j  = i+1;
    //     int k = nums.size()-1;
    //     if(i>0 && nums[i] == nums[i-1]){
    //         continue;
    //     }
    //     while(j<k){
    //         int sum = nums[i] + nums[j] + nums[k];
    //         if(sum > 0){
    //             k--;
    //         }
    //         else if(sum < 0){
    //             j++;
    //         }
    //         else{
    //             v1.push_back({nums[i],nums[j],nums[k]});
    //             k--;
    //             j++;
    //             while(j<k && nums[j] == nums[j-1]){
    //                 j++;
    //             }
    //             while(j<k && nums[k] == nums[k+1]){
    //                 k--;
    //             }
    //         }
    //     }
    // }
    // return v1;

    for(int i=0;i<nums.size();i++){
        int j = i+1;
        int k = nums.size()-1;
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else{
                v1.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j] == nums[j-1]){
                    j++;
                }
                while(j<k && nums[k] == nums[k+1]){
                    k--;
                }
            }
        }
    }
    return v1;
}
