/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/

void markRow(vector<vector<int>>& matrix,int r,int n){
    for(int i=0;i<n;i++){
        if(matrix[r][i] != 0){
            matrix[r][i] = -1;
        }
    }
}

void markCol(vector<vector<int>>& matrix,int c,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][c] != 0){
            matrix[i][c] = -1;
        }
    }
}


void setZeroes(vector<vector<int>>& matrix) {
    // int n = matrix.size();
    // int m = matrix[0].size();
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j] == 0){
    //             markRow(matrix,i,n);
    //             markCol(matrix,j,m);
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j] == -1){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    int r = matrix.size();
    int c = matrix[0].size();
    // vector<int>row(r);
    // vector<int>col(c);
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         if(matrix[i][j] == 0){
    //             row[i] = 1;
    //             col[j] = 1;
    //         }
    //     }
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         if(row[i] == 1 || col[j] == 1){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    
    bool rowZero = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j] == 0){
                matrix[0][j] = 0;
                if(i > 0){
                    matrix[i][0] = 0;
                }
                else{
                    rowZero = 1;
                }
            
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    if(rowZero == 1){
        for(int i=0;i<c;i++){
            matrix[i][0] = 0;
        }
    }
    if(matrix[0][0]){
        for(int i=0;i<r;i++){
            matrix[0][i]=0;
        }
    }

}
