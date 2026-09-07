/* Writing my first C++ script using math
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
// using namespace std; // commenting this line out to use "std::cout" instead of "cout" only

int main()
{
    std::cout << "Hello world, this is my first cpp code man!!!\n" << std::endl; // both \n and endl can create new lines
    std::cout << "I am an OpenFOAM user.\nI am learning C++ to be able to modify the OpenFOAM code!!\n";
    double a = 2, b = 5.2; // These are two double variables
    float c;
    std::cout << "Trying to revise the basic code again\n";
    std::cout << "Writing a new line to show another way of new line" << std::endl;
    std::cout << "Now let's do some Math.......\n";
    std::cout << "Let us add two different numbers called a & b.\n";
    std::cout << "What is the first number?\n";
    std::cout << "a = " << a << std::endl;
    // std::cin >> a;
    std::cout << "Now by saying bismillah, let's add the 2nd number man" << std::endl;
    // std::cin >> b;
    std::cout << "Now the last number: \n";
    std::cin >> c;
    std::cout << "So the summation is: \n";
    std::cout << a+b+c << std::endl;
    std::cout << "Sum = " << a+b+c << std::endl;
    std::cout << "Average = " << (a+b+c)/3 << std::endl;
    std::cout << "Product = " << a*b*c << std::endl;
    return 0;
}