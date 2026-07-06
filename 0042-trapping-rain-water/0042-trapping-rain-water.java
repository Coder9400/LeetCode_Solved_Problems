class Solution {
    public static int trapping(int arr[]){
        int left[] = new int[arr.length];
        int right[] = new int[arr.length];
        int max = Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            max = max<=arr[i] ? arr[i] : max;
            left[i] = max;
        }
        max = Integer.MIN_VALUE;
        for(int i=arr.length-1;i>=0;i--){
            max = max<=arr[i] ? arr[i] : max;
            right[i] = max;
        }
        int sum = 0;
        for(int i=0;i<arr.length;i++){
            int min = Math.min(left[i],right[i]) - arr[i];
            if(min>=0){
                sum+=min;
            }
        }
        return sum;
    }
    public int trap(int[] height) {
        return trapping(height);
    }
}