int lengthOfLIS(int* nums, int numsSize) {
    int dp[numsSize];
    for (int i = 0; i < numsSize; ++i) {
        dp[i] = 1;
    }

    for (int i = 0; i < numsSize; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j])
                dp[i] = fmax(dp[i], dp[j] + 1);
        }
    }

    int max_len = 0;
    for (int i = 0; i < numsSize; ++i) {
        max_len = fmax(max_len, dp[i]);
    }

    return max_len;
}
