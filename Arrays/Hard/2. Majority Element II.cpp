/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
Input: nums = [3,2,3]
Output: [3]

*/

vector<int> majorityElement(vector<int>& nums) {
    // unordered_map<int,int> mp;
    // vector<int>v1;
    // for(int i=0;i<nums.size();i++){
    //     mp[nums[i]]++;
    // }
    
    // for(auto it:mp){
    //     if(it.second > (nums.size()/3)){
    //         v1.push_back(it.first);
    //     }
        
    // }
    

    // return v1;

    // optimal 
    // only 2 elements of an array of size n can appear more than n/3 times
    // n = 9 --> 1st = 9/3 = 3
    // 2nd = 9/3 = 3 
    // ==> 3+3  = 6 , this means and rest elements will be will be < 3

    int e1,e2,c1=0,c2=0;
    for(int i=0;i<nums.size();i++){
        if(c1 == 0 && e2 != nums[i]){
            c1 = 1;
            e1 = nums[i];
        }
        else if(c2 == 0 && e1 != nums[i]){
            c2 = 1;
            e2 = nums[i];
        }
        else if(e1 == nums[i]){
            c1++;
        }
        else if(e2 == nums[i]){
            c2++;
        }
        else{
            if(c1>0){
                c1--;
            }
            if(c2>0){
                c2--;
            }
        }
    }
    vector<int> v1;
    c1=0,c2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == e1){
            c1++;
        }
        if(nums[i] == e2){
            c2++;
        }
    }

    if(c1 > nums.size() /3){
        v1.push_back(e1);
    }
    if(c2 > nums.size() /3){
        v1.push_back(e2);
    }

    return v1;
}
