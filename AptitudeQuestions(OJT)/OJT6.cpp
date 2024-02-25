#include <iostream>
#include <vector>

int main()
{
    // Example usage
    std::vector<int> nums = {0, 1, 0, 3, 12};

    std::cout << "Original Array: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int n = nums.size();
    int i = 0;
    for (int j = 0; j < n; ++j)
    {
        if (nums[j] != 0)
        {
            nums[i] = nums[j];
            ++i;
        }
    }
    for (int k = i; k < n; ++k)
    {
        nums[k] = 0;
    }

    std::cout << "Array after moving zeroes: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
