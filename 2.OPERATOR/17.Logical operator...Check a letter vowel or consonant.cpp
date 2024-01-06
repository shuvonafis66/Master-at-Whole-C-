#include <iostream> // Include the necessary header file for input and output.

using namespace std; // Use the standard namespace to simplify code writing.

int main() { // The main function where program execution starts.

    char x; // Declare a variable 'x' of type char to store the input letter.

    cout << "Enter a letter: " << endl; // Display a prompt to the user.

    cin >> x; // Read the user input and store it in the variable 'x'.

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || // Check if the input character is a lowercase vowel.
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') { // Check if the input character is an uppercase vowel.
        cout << "The letter is vowel" << endl; // Print a message indicating that the input is a vowel.
    } else {
        cout << "The letter is consonant" << endl; // If the character is not a vowel, print a message indicating it's a consonant.
    }

    return 0; // Indicate successful completion of the program.
}
