#include <iostream>
#include <vector>

int main()
{
    // Example usage
    std::vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();
    std::vector<int> output(n, 1);

    // Calculate left products
    int left = 1;
    for (int i = 1; i < n; ++i)
    {
        output[i] = output[i - 1] * nums[i - 1];
    }

    // Calculate right products while updating the final output
    int right = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        output[i] *= right;
        right *= nums[i];
    }

    // Output the result
    std::cout << "Product of array except self: ";
    for (int num : output)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
