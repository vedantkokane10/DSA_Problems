/*
Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0
Explanation: The given array is not rotated.

*/

int findKRotation(int arr[], int n) {
  // code here
 // int pivot = -1;
 // for(int i=0;i<n-1;i++){
 //     if(arr[i] > arr[i+1]){
 //         pivot = i;
 //         break;
 //     }
 // }
 // if(pivot == -1){
 //     return 0;
 // }
 // return pivot+1;
 
 int low=0,high=n-1,mn =INT_MAX ,ans=-1;
 while(low<=high){
     int mid = (low+high)/2;
     if(arr[mid] > arr[high]){
          if(arr[mid] < mn){
              ans = mid;
              mn = arr[mid];
          }
          low = mid+1;
     }
     else{
         if(arr[mid] < mn){
              ans = mid;
              mn = arr[mid];
          }
         high = mid-1;
     }
 }
// cout<<mn<<endl;
 return ans;
}
