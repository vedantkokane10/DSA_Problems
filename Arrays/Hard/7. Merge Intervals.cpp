/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
and return an array of the non-overlapping intervals that cover all the intervals in the input.

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

*/

vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>> v1;
      sort(intervals.begin(),intervals.end());
      v1.push_back(intervals[0]);
      for(int i=1;i<intervals.size();i++){
          int a = intervals[i][0];
          int b = intervals[i][1];
          if(a >= v1.back()[0] && a <= v1.back()[1]){
              if(b > v1.back()[1]){
                  v1.back()[1] = b;
              }
          }
          else{
              v1.push_back(intervals[i]);
          }
      }
      return v1;
  }
