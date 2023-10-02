/*
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
*/

long maximumSumSubarray(int k, vector<int> &arr , int n){
    // code here 
    int i=0,j=0;
    long sum = 0,ans=0;
    while(j < n){
        sum += arr[j];
        if(j-i+1 == k){
            ans = max(ans,sum);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return ans;
}
