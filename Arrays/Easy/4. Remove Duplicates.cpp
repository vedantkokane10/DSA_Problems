int removeDuplicates(vector<int>& nums) {
        /*
        // brute-force
        set<int> s1;
        for(int i=0;i<nums.size();i++){
            s1.insert(nums[i]);
        }
        int i=0;
        for(auto x:s1){
            nums[i++] = x;
        }
        return s1.size();
        */

        // optimal
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i] != nums[j]){
                i=i+1;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
    }
