/* Trying namespace, by commenting namespace library and using namespace manually in every line with "std::"
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
// #include<cmath>
// using namespace std; // 

double Reynolds(double rho, double U, double mu, double D);

int main()
{
    double U, rho, mu, D, Re;
    std::string write_intro;
    write_intro = "Calculating Reynolds number\n";
    std::cout << write_intro;

    std::cout << "What is the velocity in (m/s)?" << std::endl;
    std::cin >> U;

    std::cout << "What is density in (kg/m3)?\n";
    std::cin >> rho;

    std::cout << "What is the dynamic viscosity?" << std::endl;
    std::cin >> mu;

    std::cout << "What is the characteristic length (m)?" << std::endl;
    std::cin >> D;

    // calculate
    std::cout << "So the Reynolds number is:" << std::endl;
    Re = Reynolds(rho,U,mu,D);
    std::cout << Re << std::endl;
    return 0;
}

double Reynolds(double rho_1, double U_1, double mu_1, double D_1)
{
    int result; // int or double
    result = rho_1*U_1*D_1/mu_1;
    return result;
}