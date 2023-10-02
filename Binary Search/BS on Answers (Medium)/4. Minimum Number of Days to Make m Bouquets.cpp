/*
You are given an integer array bloomDay, an integer m and an integer k.
You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.

Input: bloomDay = [1,10,3,10,2], m = 3, k = 2
Output: -1
Explanation: We need 3 bouquets each has 2 flowers, that means we need 6 flowers. 
We only have 5 flowers so it is impossible to get the needed bouquets and we return -1.
*/
bool func(int day,vector<int> a,int k,int m){
    int c=0;
    int minDays =0;
    for(int i=0;i<a.size();i++){
        if(a[i] <= day){
            c++;
        }
        else{
            minDays += (c/k);
            c = 0;
        }
    }
    minDays += (c/k);
    if(minDays >= m){
        return 1;
    }
    else{
        return 0;
    }
}

int minDays(vector<int>& nums, int m, int k) {
    int low = *min_element(nums.begin(),nums.end());
    int high = *max_element(nums.begin(),nums.end());
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<mid<<endl;
        bool x = func(mid,nums,k,m);
        if(x == 1){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
