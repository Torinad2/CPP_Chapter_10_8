/*************************************************************
 * Sum of Digits in a String                                 *
 *                                                           *
 * This program prompts the user to enter a series of        *
 * single-digit numbers with no spaces. It then calculates   *
 * and displays:                                             *
 * 1. The sum of all the digits                               *
 * 2. The highest digit                                      *
 * 3. The lowest digit                                       *
 *                                                           *
 * Developed by: Nikita Baiborodov                           *
 *************************************************************/

#include <iostream>
#include <string>   // For string operations
#include <cctype>   // For isdigit function

using namespace std;

/*************************************************************
 * Main Function                                             *
 * Handles input, processing, and display of results.        *
 *************************************************************/
int main() {

    /*************************************************************
     * Variable Declarations                                     *
     *************************************************************/
    string digitString;   // String to store user input
    int sum = 0, highest = 0, lowest = 9; // Initialize sum, highest and lowest values
    bool validInput = false;

    /*************************************************************
     * Input Validation Loop: Ensure only single-digit numbers   *
     *************************************************************/
    while (!validInput) {
        // Prompt user for a series of single-digit numbers
        cout << "Enter a series of single-digit numbers without spaces: ";
        getline(cin, digitString);

        // Assume input is valid until proven otherwise
        validInput = true;

        // Validate the string contents
        for (char ch : digitString) {
            if (!isdigit(ch)) {
                cout << "Error: Only single-digit numbers are allowed.\n";
                validInput = false;
                break; // Stop checking if an invalid character is found
            }
        }
    }

    /*************************************************************
     * Processing: Calculate the sum, highest, and lowest digits *
     *************************************************************/
    for (char ch : digitString) {
        int digit = ch - '0'; // Convert character to integer
        sum += digit;         // Add to sum

        // Determine highest and lowest digits
        if (digit > highest) highest = digit;
        if (digit < lowest) lowest = digit;
    }

    /*************************************************************
     * Output: Display the results                              *
     *************************************************************/
    cout << "\nResults:\n";
    cout << "----------------------------------\n";
    cout << "Sum of digits   : " << sum << endl;
    cout << "Highest digit   : " << highest << endl;
    cout << "Lowest digit    : " << lowest << endl;

    /*************************************************************
     * Developer Signature                                       *
     *************************************************************/
    cout << "\nDeveloped by: Nikita Baiborodov" << endl;

    /*************************************************************
     * End of Program                                            *
     *************************************************************/
    return 0;
}
