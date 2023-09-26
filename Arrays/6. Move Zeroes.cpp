void moveZeroes(vector<int>& nums) {
        int f;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                f= i;
                break;
            }
        }
        for(int i=f+1;i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[f],nums[i]);
                f++;
            }
        }
    }
