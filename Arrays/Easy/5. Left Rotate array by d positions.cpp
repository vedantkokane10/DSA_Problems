void reverse(vector<int> &a,int s,int e){
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}
void rotate(vector<int>& nums, int d) {
    int n = nums.size();
    reverse(nums,0,d-1);
    reverse(nums,d,n-1);
    reverse(nums,0,n-1);
}
