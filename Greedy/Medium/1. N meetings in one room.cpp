/*
There is one meeting room in a firm.
There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?
Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.

Input:
N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}
Output: 
4
Explanation:
Maximum four meetings can be held with
given start and end timings.
The meetings are - (1, 2),(3, 4), (5,7) and (8,9)
*/

static bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
int helper(int s[],int f[],int n){
   vector<pair<int,int>> a(n);
   for(int i=0;i<n;i++){
       a[i].first = s[i];
       a[i].second = f[i];
   }
   sort(a.begin(),a.end(),cmp);
   int limit = a[0].second;
   int c = 1;
   for(int i=1;i<n;i++){
       if(a[i].first > limit){
           c++;
           limit = a[i].second;
       }
   }
   return c;
}

int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    if(n==1){
        return 1;
    }
    return helper(start,end,n);
}
