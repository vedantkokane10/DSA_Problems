/*

Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

*/

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
         int i = 0 , j = 0;
         vector<long long> ans;
         list<long long> sample;
         while(j<n){
             if(arr[j] < 0){
                 sample.push_back(arr[j]);
             }
             if(j-i+1 == k){
                 if(sample.size() == 0){
                     ans.push_back(0);
                 }
                 else{
                     ans.push_back(sample.front());
                     if(arr[i] == sample.front()){
                         sample.pop_front();
                     }
                 }
                 i++;
             }
             j++;
         }
         return ans;
                                                 
 }
