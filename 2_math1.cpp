/* Writing my first C++ script using math
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
// using namespace std; // commenting this line out to use "std::cout" instead of "cout" only

int main()
{
    std::cout << "Hello world, this is my first cpp code man!!!\n"; // both \n and endl can create new lines
    std::cout << "I am an OpenFOAM user.\nI am learning C++ to be able to modify the OpenFOAM code!!\n";
    int x = 5, y = 10, z = 13; // These are three integer variables
    double a = 5, b = y; // These are two double variables
    float c;
    std::cout << "Trying to revise the basic code again\n";
    std::cout << "Now let's do some Math.......\n";
    std::cout << "Let us add two different numbers called a & b.\n";
    std::cout << "What is the first number?\n";
    std::cout << "a = " << a << std::endl;
    // std::cin >> a;
    std::cout << "Now by saying bismillah, let's add the 2nd number man\n";
    // std::cin >> b;
    std::cout << "Now the last number: \n";
    std::cin >> c;
    std::cout << "the user input of c = " << c << std::endl;
    std::cout << "So the summation is: \n";
    std::cout << x+y+z << std::endl;
    std::cout << "Sum of integers = " << x+y+z << std::endl;
    std::cout << "Average of integers = " << (x+y+z)/3 << std::endl;
    std::cout << "Product of integers = " << x*y*z << std::endl;
    std::cout << a+b+c << std::endl;
    std::cout << "Sum of doubles = " << a+b+c << std::endl;
    std::cout << "Average of doubles = " << (a+b+c)/3 << std::endl;
    std::cout << "Product of doubles = " << a*b*c << std::endl;
    return 0;
}