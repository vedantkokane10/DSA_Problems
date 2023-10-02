/*
Given a sorted array arr[] of size N without duplicates, and given a value x. 
Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.
Find the index of K(0-based indexing).

Ceil of X is the smallest element which is greater than or equal to X. Ceil of X doesn’t exist if X is greater than greatest element of Arr[].


Input:
N = 6, x = 8 
arr[] = {3 4 4 7 8 10}
Output: 8 8
Since x = 8 is present in the array, it will be both floor and ceiling.

6 2
3 4 4 7 8 10
ans = -1 3
Since no number is less than or equal to x = 2 in the array, its floor does not exist. The ceiling will be 3.
*/

int ceil(vector<int> &arr, int x, int n){
	// Write your code here.
	int s = 0,e=arr.size()-1;
	int ans = -1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] == x){
			return arr[mid];
		}
		else if(arr[mid] > x){
			ans = arr[mid];
			e = mid-1;
		}
		else{
			s = mid + 1;
		}
	}	
	return ans;
} 

int floor(vector<int> &arr, int x, int n){
	// Write your code here.
	int s = 0,e=arr.size()-1;
	int ans = -1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] == x){
			return arr[mid];
		}
		if(arr[mid] < x){
			ans = arr[mid];
			s = mid + 1;
		}
		else{
			e = e-1;
		}
	}	
	return ans;
} 

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int c = ceil(a,x,n);
	int f = floor(a,x,n);
	return {f,c};
}
