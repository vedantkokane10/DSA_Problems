/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.

Input: piles = [3,6,7,11], h = 8
Output: 4

Input: piles = [30,11,23,4,20], h = 5
Output: 30

*/

// ceil = (piles[i] % mid != 0)
long long func(int mid,vector<int> a){
    double sum = 0;
    for(int i=0;i<a.size();i++){
        sum += (a[i]/mid) + (a[i] % mid != 0);
       
    }
   // cout<<sum<<endl;
    return sum;
}


int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1,high = *max_element(piles.begin(),piles.end());
    int ans =0;
   // cout<<func(4,piles)<<endl;
   cout<<(3%4 != 0)<<endl;
   cout<<(6%4 != 0)<<endl;
    while(low<=high){
        int mid = (low+high)/2;
        int time = func(mid,piles);
        if(time <= h){
            ans = mid;
            high= mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
