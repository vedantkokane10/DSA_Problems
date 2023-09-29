/*
Given an array of integers A and an integer B.
Find the total number of subarrays having bitwise XOR of all elements equals to B.

Input 1:
 A = [4, 2, 2, 6, 4]
 B = 6
Output 1:
 4

 Explanation 1:
 The subarrays having XOR of their elements as 6 are:
 [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], [6]

*/

int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    int c = 0, xor1 = 0;
    mp[0] = 1;
    for(int i=0;i<A.size();i++){
        xor1 = xor1 ^ A[i];
        int x = xor1 ^ B;
        if(mp.find(x) != mp.end()){
            c += mp[x];
        }
        mp[xor1]++;
    }
    return c;
}
