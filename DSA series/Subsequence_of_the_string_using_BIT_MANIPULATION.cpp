#include <iostream>
#include <vector>

using namespace std;

vector<string> getSubsequences(const string &str)
{
    int n = str.length();
    int totalSubsequences = 1 << n; // Total number of subsequences = 2^n

    vector<string> subsequences;
    for (int mask = 0; mask < totalSubsequences; mask++)
    {
        string subsequence;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                subsequence += str[i];
            }
        }
        subsequences.push_back(subsequence);
    }

    return subsequences;
}

int main()
{
    string str = "abc";

    vector<string> subsequences = getSubsequences(str);

    for (const auto &subsequence : subsequences)
    {
        cout << subsequence << endl;
    }

    return 0;
}
