bool check(vector<int>& nums) {
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[(i+1) % nums.size()]){
              //  cout<<nums[i]<<" > "<<nums[(i+1) % nums.size()]<<endl;
                c++;
            }
        }
        
        if(c <= 1){
            return 1;
        }
        return 0;
    }
