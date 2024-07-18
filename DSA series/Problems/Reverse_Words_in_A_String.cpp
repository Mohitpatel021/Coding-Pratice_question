// Function to reverse a word if its length is three or more
string reverseWord(const string &word)
{
    if (word.length() >= 3)
    {
        string reversed_word = word;
        reverse(reversed_word.begin(), reversed_word.end());
        return reversed_word;
    }
    else
    {
        return word;
    }
}

// Function to reverse words in the input string
string reverseWords(const string &input_string)
{
    string result;
    string word;
    size_t start = 0;

    for (size_t i = 0; i <= input_string.length(); i++)
    {
        if (i == input_string.length() || input_string[i] == ' ')
        {
            word = input_string.substr(start, i - start);
            string reversed_word = reverseWord(word);
            result += reversed_word;
            if (i != input_string.length())
            {
                result += ' ';
            }
            start = i + 1;
        }
    }

    return result;
}