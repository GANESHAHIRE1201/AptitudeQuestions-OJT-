#include <iostream>

int main()
{
    // Example strings
    std::string s = "abc";
    std::string t = "ahbgdc";

    int count = 0;
    for (int i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[count])
        {
            count = count + 1;
        }
    }

    if (s.size() == count)
    {
        std::cout << s << " is a subsequence of " << t << std::endl;
    }
    else
    {
        std::cout << s << " is not a subsequence of " << t << std::endl;
    }

    return 0;
}
