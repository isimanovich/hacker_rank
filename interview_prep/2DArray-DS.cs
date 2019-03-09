    // Complete the hourglassSum function below.
    static int hourglassSum(int[][] arr) {
        int maxResult = Int32.MinValue;
        int result = 0;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                // [i][j],    [i][j+1], [i][j+2]
                //           [i+1][j+1]
                // [i+2][j], [i+2][j+1], [i+2][j+2]
                result = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                if (result > maxResult)
                    maxResult = result;

            }
        }
        return maxResult;
    }