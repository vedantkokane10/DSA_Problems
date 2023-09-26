/*
Longest subarray with sum K (Positives + Negatives)
Given an array containing N integers and an integer K.,
Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

Input : A[] = {10, 5, 2, 7, 1, 9} 
K = 15
Output : 4 
Explanation: The sub-array is
{5, 2, 7, 1}.
*/

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
