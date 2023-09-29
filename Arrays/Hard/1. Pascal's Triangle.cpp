/*
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

*/

vector<int> ncr(long long r){
        vector<int> v1;
        v1.push_back(1);
        int ans = 1;
        for(int i=0;i<r;i++){
            ans = ans * (r-i);
            ans = ans / (i+1);
            cout<<ans<<" ";
            v1.push_back(ans);
        }
        cout<<endl;
        return v1;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v1;
        v1.push_back({1});
        for(int i=1;i<numRows;i++){
            v1.push_back(ncr(i));
        }
        return v1;
    }
