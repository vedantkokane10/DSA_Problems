int findMaxConsecutiveOnes(vector<int>& nums) {
    int one =0;
    int mx =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 1){
            mx = max(mx,one);
            one = 0;
        }
        else{
            one++;
        }
    }
    mx = max(mx,one);
    return mx;
}
