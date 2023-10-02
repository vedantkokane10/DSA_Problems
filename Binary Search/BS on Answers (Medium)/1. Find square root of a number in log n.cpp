/*
Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.

Input:
x = 4
Output: 2
Explanation: Since, 4 is a perfect 
square, so its square root is 2.
*/

long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    long long low = 1,high = x,ans=-1;
    while(low<=high){
        long long mid = (low+high)/2;
        if(mid*mid <= x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
