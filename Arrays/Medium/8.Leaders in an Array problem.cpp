/*
Given an array A of positive integers. Your task is to find the leaders in the array.
An element of array is leader if it is greater than or equal to all the elements to its right side.
The rightmost element is always a leader.

Input:
n = 6 
A[] = {16,17,4,3,5,2}
Output: 17 5 2 
Explanation: 
The first leader is 17 as it is greater than all the elements to its right.
Similarly, the next leader is 5. 
The right most element is always a leader so it is also included.
*/

vector<int> leaders(int a[], int n){
    // Code here
    vector<int>v;
    // for(int i=0;i<n;i++){
    //     int l = a[i];
    //     bool p = 0;
    //     for(int j=i+1;j<n;j++){
    //         if(a[j] > l){
    //             p =1;
    //             break;
    //         }
    //     }
    //     if(p == 0){
    //         v.push_back(a[i]);
    //     }
    // }
    
    
    int mx = a[n-1];
    v.push_back(mx);
    for(int i=n-2;i>=0;i--){
        mx = max(mx,a[i]);
        if(a[i] >= mx){
            v.push_back(a[i]);
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
