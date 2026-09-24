/* calculating the Reynolds number
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
// #include<cmath>
// using namespace std;

int main()
{
    double U, rho, mu;
    float D;
    std::string write_something,again_write,man_write_again;
    write_something = "Calculating Reynolds number\n";
    again_write = "Why is this number so important bro?\n";
    man_write_again = "Yes coz it tells us about the flow regime\n";
    std::cout << write_something;
    std::cout << again_write;
    std::cout << man_write_again;
    std::cout << "What is density in (kg/m³)?\n";
    std::cin >> rho;
    std::cout << "What is the velocity in (m/s)" << std::endl;
    std::cin >> U;
    std::cout << "What is the dynamic viscosity" << std::endl;
    std::cin >> mu;
    std::cout << "What is the characteristic length? (m)" << std::endl;
    std::cin >> D;
    double Re = (rho*U*D)/mu;
    std::cout << "The Reynolds number is: " << Re << std::endl;
    return 0;
}