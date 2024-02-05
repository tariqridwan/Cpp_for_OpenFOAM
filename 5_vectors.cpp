/* Trying namespace, by commenting namespace library and using namespace manually in every line with "std::"
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
#include<cmath>
// using namespace std; // 

double vector_length(double x, double y, double z);

int main()
{
    double x, y, z, L;
    std::string write_intro;
    write_intro = "Calculating Vector length\n";
    std::cout << write_intro;

    std::cout << "What is the value of x?" << std::endl;
    std::cin >> x;

    std::cout << "What is the value of y\n";
    std::cin >> y;

    std::cout << "What is the value of z?" << std::endl;
    std::cin >> z;

    // calculate
    std::cout << "So the Vector's Length is:" << std::endl;
    L = vector_length(x, y, z);
    std::cout << L << std::endl;
    return 0;
}

double vector_length(double x, double y, double z)
{
    double result; // int or double
    result = sqrt( pow(x,2.0) + pow(y,2.0) + pow(z,2.0));
    return result;
}