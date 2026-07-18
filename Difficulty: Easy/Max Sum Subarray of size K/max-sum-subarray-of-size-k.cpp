class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        
        int maxSum = sum;
        
        for(int i=k; i<n; i++){
            sum += arr[i];
            sum -= arr[i-k];
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
        
    }
};