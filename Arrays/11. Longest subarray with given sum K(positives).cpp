int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        // brute-force
        // int mx = 0;
        // for(int i=0;i<N;i++){
        //     int c = 1;
        //     int sum = 0;
        //     bool y = 0;
        //     for(int j=i;j<N;j++){
        //         sum += A[j];
        //         if(sum == K){
        //             mx = max(mx,j-i+1);
        //         }
        //     }   
            
        // }
        // return mx;
        
        //better 
        unordered_map<int,int> mp;
        int sum = 0,mx=0;
        for(int i=0;i<N;i++){
            sum = sum + A[i];
            if(sum == K){
                mx = max(mx,i+1);
            }
            int rem = sum-K;
            if(mp.find(rem) != mp.end()){
                int len = i - mp[rem];
                mx = max(mx,len);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return mx;
    } 
