#include <iostream>

int main()
{
    std::string inputString = "Hello World, how are you?";
    std::string ans = "", temp = "";
    int n = inputString.size();
    bool first = true;

    // Loop through each character in the input string
    for (int i = 0; i < n; i++)
    {
        if (inputString[i] != ' ')
        {
            // If the character is not a space, append it to the temporary string
            temp += inputString[i];
        }
        else
        {
            // If the character is a space, a word is complete
            if (temp.size() > 0)
            {
                // If it's the first word, append it directly to the result string
                if (first)
                {
                    ans += temp;
                    first = false;
                }
                else
                {
                    // If not the first word, concatenate it with the existing result string
                    ans = (temp + " " + ans);
                }
            }
            // Reset the temporary string for the next word
            temp = "";
        }
    }

    // Handle the last word in the string
    if (temp.size() > 0)
    {
        if (first)
        {
            ans += temp;
            first = false;
        }
        else
        {
            ans = (temp + " " + ans);
        }
    }

    std::cout << "Original String: " << inputString << std::endl;
    std::cout << "Reversed String: " << ans << std::endl;

    return 0;
}
