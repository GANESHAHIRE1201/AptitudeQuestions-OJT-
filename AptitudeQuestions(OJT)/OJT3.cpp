#include <iostream>
#include <vector>

int main()
{
    std::vector<int> flowerbed = {1, 0, 0, 0, 0, 0, 1};
    int n = 2;

    int len = flowerbed.size();
    int cnt = 0;

    for (int i = 0; i < len; ++i)
    {
        // Check if the current position is empty
        if (flowerbed[i] == 0)
        {
            // Check if the left and right positions are also empty
            int left = (i == 0 || flowerbed[i - 1] == 0) ? 0 : 1;
            int right = (i == len - 1 || flowerbed[i + 1] == 0) ? 0 : 1;

            if (left == 0 && right == 0)
            {
                // Plant a flower, update count, and skip the next position
                i++;
                cnt++;

                if (cnt >= n)
                {
                    std::cout << "You can plant " << n << " flowers." << std::endl;
                    return 0;
                }
            }
        }
    }

    std::cout << "You cannot plant " << n << " flowers." << std::endl;
    return 0;
}
