#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Check if the number of command line arguments is correct.
    /* if (argc != 3)
     {
         cout << "Usage: " << argv[0] << " <number1> <number2>" << endl;
         return 1;
     }
     */

    // Get the two numbers from the command line arguments.
    int number1 = atoi(argv[1]);
    int number2 = atoi(argv[2]);

    // Add the two numbers and print the result.
    int sum = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;

    return 0;
}
