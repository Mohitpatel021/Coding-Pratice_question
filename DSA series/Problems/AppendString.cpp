#include <iostream>
#include <string>

void mergeStringsInPlace(std::string &word1, std::string &word2)
{
    int n = word1.length();
    int m = word2.length();
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        // Insert the character from word2 into word1 at alternating positions.
        word1.insert(i + 1, 1, word2[j]);
        i += 2; // Increment by 2 to maintain the alternating order.
        j++;
    }

    // If there are any remaining characters in word2, append them to word1.
    if (j < m)
    {
        word1.append(word2.substr(j));
    }
}

int main()
{
    std::string word1 = "abc";
    std::string word2 = "pqr";

    mergeStringsInPlace(word1, word2);
    std::cout << word1 << std::endl; // Output: "apbqcr"

    return 0;
}
