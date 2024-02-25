#include <iostream>
#include <string>

int main()
{
    std::string s1 = "abc";
    std::string s2 = "pqr";

    std::string result;

    int size = std::min(s1.size(), s2.size());

    for (int i = 0; i < size; ++i)
    {
        result += s1[i];
        result += s2[i];
    }

    result += s1.substr(size) + s2.substr(size);

    std::cout << "Merged String: " << result << std::endl;

    return 0;
}
