/* Calculating the vector length using vector, part I
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
#include<cmath>
// using namespace std; // 

double vector_length(double x, double y, double z);

int main()
{
    double L;
    double sample_vector[3][1];
    std::string write_intro;
    write_intro = "Calculating Vector length\n";
    std::cout << write_intro;

    std::cout << "What is the value of x?" << std::endl;
    std::cin >> sample_vector[0][0];

    std::cout << "What is the value of y\n";
    std::cin >> sample_vector[1][0];

    std::cout << "What is the value of z?" << std::endl;
    std::cin >> sample_vector[2][0];

    // calculate
    std::cout << "So the Vector's Length is:" << std::endl;
    L = vector_length(sample_vector[0][0],sample_vector[1][0],sample_vector[2][0]);
    std::cout << L << std::endl;
    return 0;
}

double vector_length(double x_1, double y_1, double z_1)
{
    double result; // int or double
    result = sqrt( pow(x_1,2.0) + pow(y_1,2.0) + pow(z_1,2.0));
    return result;
}