/*
Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
*/

int lengthOfLongestSubstring(string s) {
    int i=0, j=0 , n = s.size();
    unordered_set<int> st;
    int ans = 0;
    while(i<n && j<n){
        if(st.find(s[j]) == st.end()){
            ans = max(ans,j-i+1);
            st.insert(s[j]);
            j++;
        }
        else{
            st.erase(s[i]);
            i++;
        }
    }
    return ans;
}
