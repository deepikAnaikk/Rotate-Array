class Solution {
  public:
    void reverse(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Handle cases where d > n

        // Step 1: Reverse first d elements
        reverse(arr, 0, d - 1);

        // Step 2: Reverse the remaining elements
        reverse(arr, d, n - 1);

        // Step 3: Reverse the whole array
        reverse(arr, 0, n - 1);
    }
};
