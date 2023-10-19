#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool backspaceCompare(string s, string t)
{
    // Helper function to process the input string and return the final string after backspacing
    auto processString = [](string str)
    {
        stack<char> result; // Create a stack to store characters

        for (char c : str)
        {
            if (c != '#')
            {
                result.push(c); // Push non-backspace characters onto the stack
            }
            else if (!result.empty())
            {
                result.pop(); // Pop a character from the stack when encountering a backspace
            }
        }

        string finalStr;
        while (!result.empty())
        {
            finalStr = result.top() + finalStr; // Reconstruct the final string by reversing the stack
            result.pop();
        }

        return finalStr; // Return the processed string
    };

    string processedS = processString(s); // Process the first input string
    string processedT = processString(t); // Process the second input string

    return processedS == processedT; // Compare the processed strings for equality
}
int main()
{
    return 0;
}