/* Some math addition operation
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    double a,b;
    float c;
    string write_something,again_write,man_write_again;
    write_something = "Adding some string statement before the mathematical operations\n Included string library for that\n";
    again_write = "by the way do you know why loko is always angry¿¿\n";
    man_write_again = "Yes coz he is a loko\n";
    cout << write_something;
    cout << again_write;
    cout << man_write_again;
    string whassup = "whassup man, I am a string variable\n";
    cout << whassup;
    cout << "Now let's write something:\n";
    string tatti;
    // cin >> tatti; // reads a value up to the next whitespace (space, tab, newline, etc.).
    getline(cin, tatti); // so that it can read the entire line of input, including spaces, until the user presses Enter.
    cout << "the user input of tatti = " << tatti << endl;
    cout << "Trying to revise the basic code again\n";
    cout << "Now let's do some Math.......\n";
    cout << "What is the first number?\n";
    cin >> a;
    cout << "Now by saying bismillah, insert the 2nd number man\n";
    cin >> b;
    cout << "Now the last number: \n";
    cin >> c;
    cout << "So the summation is: \n";
    cout << a+b+c << endl;
    cout << "See the output of 5/10 in C++:\n";
    cout << 5/10 << endl;
    cout << "Now see the output of 5.0/10 in C++:\n";
    cout << 5.0/10 << endl;
    cout << "Do you see any differences? :)\n";
    return 0;
}