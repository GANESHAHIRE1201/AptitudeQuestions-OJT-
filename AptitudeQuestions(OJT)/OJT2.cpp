#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // Example usage
    std::vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    // Find the maximum number of candies among all kids
    int maxCandies = *std::max_element(candies.begin(), candies.end());

    // Use a lambda expression to check if each kid can have the greatest number of candies
    std::vector<bool> result;
    std::for_each(candies.begin(), candies.end(), [&](int candy)
                  { result.push_back(candy + extraCandies >= maxCandies); });

    // Display the result using a range-based for loop
    std::cout << "Result: [";
    for (bool canHaveGreatest : result)
    {
        std::cout << (canHaveGreatest ? "true" : "false") << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
