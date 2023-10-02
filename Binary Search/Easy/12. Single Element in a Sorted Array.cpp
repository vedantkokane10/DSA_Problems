/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

Input: nums = [3,3,7,7,10,11,11]
Output: 10
*/

nt singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }

        // for(auto x : mp){
        //     if(x.second == 1){
        //         return x.first;
        //     }
        // }
        // return -1;

        // int ans = -1;
        // if(nums.size() == 1){
        //     return nums[0];
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(i == 0){
        //         if(nums[i] != nums[i+1]){
        //             return nums[i];
        //         }
        //     }
        //     else if(i == nums.size()-1){
        //         if(nums[i] != nums[i-1]){
        //             return nums[i];
        //         }
        //     }
        //     else{
        //         if(nums[i] != nums[i+1] && nums[i] != nums[i-1] ){
        //             return nums[i];
        //         }
        //     }
        // }
        // return ans;
        
        // int n = nums.size();
        // int low = 1,high = nums.size()-2;
        // if(nums.size()  == 1){
        //     return nums[0];
        // }
        // if(nums[0] != nums[1]){
        //     return nums[0];
        // }
        // if(nums[n-1] != nums[n-2]){
        //     return nums[n-1];
        // }


        // while(low <= high){
        //     int mid = (low+high)/2;
        //     if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
        //         return nums[mid];
        //     }
        //     if(mid%2 == 0 && nums[mid-1] != nums[mid] || mid%2 == 1 && nums[mid+1] != nums[mid]){
        //         low = mid +1;
        //     }
        //     else{
        //         high = mid-1;
        //     }
        // }
        // cout<<nums[low];


    int n = nums.size();
    int low = 1,high = n-2;
    if(n == 1){
        return nums[0];
    }
    if(nums[0] != nums[1]){
        return nums[0];
    }
    if(nums[n-1] != nums[n-2]){
        return nums[n-1];
    }

    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }

        if((mid % 2 == 0 && nums[mid-1] != nums[mid]) || (mid % 2 == 1 && nums[mid+1] != nums[mid]) ){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
     }
        return -1;
    }
