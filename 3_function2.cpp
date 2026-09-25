/* calculating the Reynolds number using a "void" function
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
// #include<cmath>
// using namespace std;

double calculateReynolds(double density, double velocity, double viscosity, double characteristic_length); // Prototype: Returns a double instead of void

int main()
{
    double rho, U, mu, D;
    std::string write_intro = "Calculating Reynolds number\n";
    std::cout << write_intro;

    std::cout << "What is the velocity in (m/s)?" << std::endl;
    std::cin >> U;

    std::cout << "What is density in (kg/m³)?\n";
    std::cin >> rho;

    std::cout << "What is the dynamic viscosity?" << std::endl;
    std::cin >> mu;

    std::cout << "What is the characteristic length (m)?" << std::endl;
    std::cin >> D;

    // Store the returned value in a variable
    double Re = calculateReynolds(rho, U, mu, D);
    
    std::cout << "So the Reynolds number is: " << Re << std::endl;

    // Now you can use Re for logic checks!
    if (Re > 2300)
    {
        std::cout << "Flow is turbulent or transitional.\n";
    }
    else
    {
        std::cout << "Flow is laminar.\n";
    }

    return 0;
}

// Definition
double calculateReynolds(double density, double velocity, double viscosity, double characteristic_length)
{
    return (density * velocity * characteristic_length) / viscosity;
}