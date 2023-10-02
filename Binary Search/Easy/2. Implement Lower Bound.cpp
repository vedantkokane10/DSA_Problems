/*
first element in the range [first, last) which has a value not less than val.

Ex 1
6
1 2 2 3 3 5
2
Ans - 1

Ex 2
6
1 2 2 3 3 5
0
Ans - 0

*/

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int s = 0, e= n-1;
	int ans = 0;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] >= x){
			ans = mid;
			e = mid-1;
		}
		else{
			//ans = mid;
			s = mid+1;
		}
	}
	return s;
}
