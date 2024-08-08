//2nd question of binary search in 2D Array where both col and row is sorted . DO QUESTION 1 FOR BINARY SEARCH IN 2D ARRAY WITH SIMPLE SORTED 2D MATRIX


 bool searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length;
        int col = matrix[0].length;

        int rowIdx = 0;
        int colIdx = col - 1;

        while(rowIdx < rows && colIdx >= 0){
            int val = matrix[rowIdx][colIdx];

            if(val == target){
                return true;
            }
            if(val < target){
                rowIdx++;
            }
            else colIdx--;
        }

        return false;
    }