// Writing my first C++ script using math

#include<iostream>
#include<string>
using namespace std;

int main()
{
    double a,b;
    float c;
    string write_something,again_write,man_write_again;
    write_something = "Adding some string statement before the mathematical operations\n";
    again_write = "by the way do you know why Mati loco is always angry\n";
    man_write_again = "Yes I think coz he has childhood trauma\n";
    cout << write_something;
    cout << again_write;
    cout << man_write_again;
    cout << "Trying to revise the basic code again\n";
    cout << "Writing a new line to show another way of new line" << endl;
    cout << "Now let's do some Math.......\n";
    cout << "Let us add two different numbers called a & b.\n";
    cout << "What is the first number?\n";
    cin >> a;
    cout << "Now by saying bismillah, insert the 2nd number man" << endl;
    cin >> b;
    cout << "Now the last number: \n";
    cin >> c;
    cout << "So the summation is: \n";
    cout << a+b+c << endl;
    cout << "See the output of 5/10 in C++:\n";
    cout << 5/10 << endl;
    cout << "Now see the output of 5.0/10 in C++:\n";
    cout << 5.0/10 << endl;
    cout << "Do you see any differences? :)";
    return 0;
}