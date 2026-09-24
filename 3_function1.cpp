/* calculating the Reynolds number using a "void" function
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
// #include<cmath>
// using namespace std;

void Reynolds(double rho_1, double U_1, double mu_1, double D_1);

int main()
{
    double rho, U, mu, D;
    std::string write_intro;
    write_intro = "Calculating Reynolds number\n";
    std::cout << write_intro;

    std::cout << "What is the velocity in (m/s)?" << std::endl;
    std::cin >> U;

    std::cout << "What is density in (kg/m³)?\n";
    std::cin >> rho;

    std::cout << "What is the dynamic viscosity?" << std::endl;
    std::cin >> mu;

    std::cout << "What is the characteristic length (m)?" << std::endl;
    std::cin >> D;

    // double Re = (rho*U*D)/mu;
    // std::cout << "The Reynolds number is: " << Re << std::endl; // calculating directly like this is not a good practice, instead we can use a function to calculate it as shown below. This is a better practice in programming to use functions for calculations.

    std::cout << "So the Reynolds number is:" << std::endl;
    Reynolds(rho,U,mu,D); // calling the function for calculation instead of calculating directly like: double Re = (rho*U*D)/mu; (as shown above) which is not a good practice.
    return 0;
}

void Reynolds(double density, double velocity, double viscosity, double characteristic_length)
{
    std::cout << density*velocity*characteristic_length/viscosity << std::endl;
}