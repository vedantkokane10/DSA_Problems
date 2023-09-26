/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

*/

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int left = 0,top = 0;
    int right = matrix[0].size() - 1;
    int bottom = matrix.size()-1;
    vector<int> a;
    while(left<=right && top<=bottom){
        for(int i= left;i<=right ;i++){
            a.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i <=bottom ;i++){
            a.push_back(matrix[i][right]);
        }
        right--;

        if(!(left<=right && top<=bottom)){
            break;
        }

        for(int i= right;i>=left ;i--){
            a.push_back(matrix[bottom][i]);
        }
        bottom--;

        for(int i=bottom;i>=top ;i--){
            a.push_back(matrix[i][left]);
        }
        left++;
    }
    return a;
}
