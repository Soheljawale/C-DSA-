/// MAX Sum Subarray Of Size k Problme on GFG


class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int sum = 0;
        int maxSum = 0;


// Time Complexity : o(n)
// Space Complexity : o(1) constant 
      
        // First window
        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        maxSum = max(maxSum, sum);

        // Sliding window
        for(int i = k; i < arr.size(); i++) {
            sum += arr[i];        // add next element
            sum -= arr[i - k];    // remove previous window element

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};
