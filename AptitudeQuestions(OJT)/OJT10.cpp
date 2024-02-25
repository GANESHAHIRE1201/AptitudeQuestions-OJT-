#include <iostream>
#include <vector>
#include <climits>

int main()
{
    // Example usage
    std::vector<int> nums = {1, 2, 3, 4, 5};

    int n = nums.size();
    if (n < 3)
    {
        // If size of array is less than 3, it's not possible to have increasing triplet
        std::cout << "false" << std::endl;
        return 0;
    }

    int left = INT_MAX;
    int mid = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > mid)
        {
            // If nums[i] is greater than mid, it satisfies the condition of triplet
            std::cout << "true" << std::endl;
            return 0;
        }
        else if (nums[i] > left && nums[i] < mid)
        {
            // nums[i] is greater than left and less than mid, update mid
            mid = nums[i];
        }
        else if (nums[i] < left)
        {
            // nums[i] is less than left, update left
            left = nums[i];
        }
    }

    // If we traversed the whole array and didn't find triplet
    std::cout << "false" << std::endl;
    return 0;
}
