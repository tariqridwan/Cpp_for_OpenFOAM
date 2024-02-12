/* Calculating the vector length using vector, part II
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
#include<cmath>
// using namespace std; // 

double vector_length(double x, double y, double z);

int main()
{
    double x,y,z,L;
    double sample_vector[3][1] = {{x},{y},{z}}; // If we want to initialize vectors
    // double L; // this is another way writing above 2 lines
    // double x = sample_vector[0][0];
    // double y = sample_vector[1][0];
    // double z = sample_vector[2][0];
    std::string write_intro;
    write_intro = "Calculating Vector length\n";
    std::cout << write_intro;

    std::cout << "What is the value of x?" << std::endl;
    // std::cin >> sample_vector[0][0];
    std::cin >> x;

    std::cout << "What is the value of y\n";
    // std::cin >> sample_vector[1][0];
    std::cin >> y;

    std::cout << "What is the value of z?" << std::endl;
    // std::cin >> sample_vector[2][0];
    std::cin >> z;

    // calculate
    std::cout << "So the Vector's Length is:" << std::endl;
    // L = vector_length(sample_vector[0][0],sample_vector[1][0],sample_vector[2][0]);
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