/*
first element in the range [first, last] that is greater than value

Ex 1
5 7
1 4 7 8 10
Ans - 3

Ex 2
5 10
1 2 5 6 10   
Ans - 5
*/

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int s = 0,e=arr.size()-1;
	int ans = e;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] > x){
			ans = mid;
			e = mid-1;
		}
		else{
			s = mid + 1;
		}
	}	
	return s;
}3. 
