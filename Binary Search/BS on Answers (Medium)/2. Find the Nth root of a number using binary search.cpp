/*
You are given 2 numbers (n , m); the task is to find n√m (nth root of m).

Input: n = 2, m = 9
Output: 3
Explanation: 3^2 = 9

Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not
integer.
*/

long long mul(int mid,int n,int m){
    long long ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * mid;
        if(ans > m){
            return 2;
        }
    }
    if(ans == m){
        return 1;
    }
    return 0;
}
int NthRoot(int n, int m)
{
    // Code here.
    long long low = 1,high = m,ans=-1;
      while(low<=high){
          long long mid = (low+high)/2;
          long long x = mul(mid,n,m);
          if(x == 1){
              return mid;
          }
          else if(x == 2){
              high = mid-1;
              
          }
          else{
              low = mid+1;
          }
          
      }
      return -1;
}  
