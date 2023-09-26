/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

*/

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    // if(nums.size() == 1){
    //     return 1;
    // }
    // sort(nums.begin(),nums.end());
    // int mx = 0,c=1,lastSmaller= nums[0];
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i] - 1 == lastSmaller){
    //         c += 1;
    //         lastSmaller= nums[i];
    //     }
    //     else{
    //         c = 1;
    //         lastSmaller= nums[i];
    //     }
    //     mx = max(c,mx);
    // }


    unordered_set<int> st;
    int mx = 0;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    for(int i=0;i<nums.size();i++){
        int x = nums[i];
        if(st.find(x-1) == st.end()){
            int c = 1;
            while(st.find(x+1) != st.end()){
                c++;
                x++;
            }
            mx = max(c,mx);
        }
    }
    return mx;
}
