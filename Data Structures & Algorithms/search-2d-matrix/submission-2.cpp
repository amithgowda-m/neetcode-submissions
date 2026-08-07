class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int targetRow = -1;
        int topRow=0,bottomRow = m-1;
        while(topRow<=bottomRow){
            int midRow = topRow  + (bottomRow-topRow)/2;

            if(target>=matrix[midRow][0] && target<=matrix[midRow][n-1]){
                targetRow = midRow;
                break;
            }
            else if(matrix[midRow][0]>target) bottomRow = midRow-1;
            else topRow = midRow+1;
        }
        if(targetRow ==-1) return false;

        int left =0, right =n-1;
        while(left<=right){
            int mid = left+(right-left)/2;

            if(matrix[targetRow][mid]==target) return true;
            else if(matrix[targetRow][mid]<target) left = mid+1;
            else right = mid-1;
        }
        return false;
    }
};
