#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int sz = nums.size();

    int area = 0;

    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            double tmp = min(nums[i], nums[j]) * (j - i);
            if (area < tmp)
                area = tmp;
        }
    }
    cout << "\n MAX Area ::" << area << endl;
    return 0;
}