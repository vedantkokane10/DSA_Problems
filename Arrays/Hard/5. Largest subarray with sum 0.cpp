/*
Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.
*/

int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int mx = 0, c=0,sum=0;
        unordered_map<int,int> mp;
       // mp[0] = 1;
        for(int i=0;i<n;i++){
            sum += A[i];
            if(sum == 0){
                c = i+1;
                mx = max(c,mx);
            }
            else{
                if(mp.find(sum) != mp.end()){
                    c = i - mp[sum];
                    mx = max(c,mx);
                }
                else{
                    mp[sum] = i;
                }
            }
        }
        return mx;
    }
