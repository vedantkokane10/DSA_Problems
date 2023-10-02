/*
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.

*/

// lb - leftBiased

int binarySearch(int arr[],int n,int x,bool lb){
  int s=0,e=n-1,ans=-1;
  while(s<=e){
      int mid = (s+e)/2;
      if(arr[mid] > x){
          e = mid-1;
      }
      else if(arr[mid] < x){
          s = mid+1;
      }
      else {
          if(lb){
              ans = mid;
              e = mid-1;
          }
          else{
              ans = mid;
              s = mid+1;
          }
      }
  }
  return ans;
}
int count(int arr[], int n, int x) {
  // code here
  
  int first = binarySearch(arr,n,x,1);
  int last = binarySearch(arr,n,x,0);
  if(first == -1){
      return 0;
  }
  return last-first+1;
}
