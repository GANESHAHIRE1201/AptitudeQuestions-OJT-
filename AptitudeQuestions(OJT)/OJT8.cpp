#include <iostream>
#include <vector>
#include <climits>

int main()
{
    // Example usage
    std::vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double sum = 0, maxAvg = INT_MIN;

    // Calculate initial sum for the first k elements
    for (int i = 0; i < k; ++i)
    {
        sum += nums[i];
    }

    // Update maxAvg based on the initial k elements
    maxAvg = std::max(maxAvg, (sum / k));

    int n = nums.size(), start = 0;

    // Iterate through the rest of the elements
    for (int i = k; i < n; ++i)
    {
        // Update sum by adding the current element and subtracting the first element in the window
        sum += nums[i];
        sum -= nums[start++];

        // Update maxAvg based on the current window
        maxAvg = std::max(maxAvg, (sum / k));
    }

    // Output the result
    std::cout << "Maximum average of subarrays with size " << k << ": " << maxAvg << std::endl;

    return 0;
}
