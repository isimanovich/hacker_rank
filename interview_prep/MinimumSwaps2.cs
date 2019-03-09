// Complete the minimumSwaps function below.
static int minimumSwaps(int[] arr) {
    int result = 0;
    for(int i = 0; i < arr.Length; i++){
        if(arr[i] != (i+1)){
            int currValue = arr[i];
            for(int j = i; j < arr.Length; j++){
                if(arr[j] == i+1){
                    arr[i] = arr[j];
                    arr[j] = currValue;
                    result++;
                    break;
                }
            }
        }
    }
    return result;
}