class Solution {
public:
    bool searchWithinMatrix(vector<int> & matrix, int target){
        int high = matrix.size()-1;
        int low = 0;
        int mid = low+(high-low)/2;
        while (low<=high){
            if(matrix[mid]==target){
                return true;
            }
            if(target>matrix[mid]){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
            mid = low+(high-low)/2;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int high = matrix.size()-1;
        int low = 0;
        int mid = low+(high-low)/2;
        while (low<=high){
            if(matrix[mid][0]==target){
                return true;
            }
            if(target>matrix[mid][0]){
                if(searchWithinMatrix(matrix[mid], target)){
                    return true;
                }
                low = mid +1;
            }
            else {
                high = mid -1;
            }
            mid = low+(high-low)/2;
        }
        return false;
    }
};
