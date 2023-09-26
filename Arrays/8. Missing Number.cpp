int missingNumber(vector<int>& nums) {
        // xor --> if same then zero 
        // 2^2 = 0
        // 0^4 = 4
        // if number are different
        // convert into binary compare bit by bit if same then 0 else 1
        // convert binary back to decimal
        // n1 = 2, n2 = 4
        // n1 = 0010, n2 = 0100
        // n1^n2 = 0110
        // n1^n2 = 6
        cout<<(2^4)<<endl;
        int xor1=0,xor2=0;
        for(int i=0;i<nums.size();i++){
            xor1 = xor1^i+1;
            xor2 =xor2^nums[i];
        }
        return xor1^xor2;
    }
