#include <iostream>
#include <vector>
#include <climits>

int main()
{
    // Example candies and extraCandies
    std::vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    int maxCandies = INT_MIN;
    std::vector<bool> ans;

    // Find the maximum number of candies
    for (int i = 0; i < candies.size(); ++i)
    {
        if (maxCandies <= candies[i])
        {
            maxCandies = candies[i];
        }
    }

    // Add extraCandies to each candy and check if it's greater than or equal to maxCandies
    for (int i = 0; i < candies.size(); ++i)
    {
        candies[i] = candies[i] + extraCandies;

        if (maxCandies <= candies[i])
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }

    // Output the result
    std::cout << "Result: [";
    for (bool res : ans)
    {
        std::cout << (res ? "true" : "false") << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
