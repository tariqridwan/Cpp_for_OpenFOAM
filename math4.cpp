// Writing my first C++ script using math

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    double U, rho, mu, D;
    float c;
    string write_something,again_write,man_write_again;
    write_something = "Calculating Reynolds number\n";
    again_write = "by the way do you know why Mati loco is always angry¿¿\n";
    man_write_again = "Yes I think coz he has childhood trauma..\n";
    cout << write_something;
    cout << again_write;
    cout << man_write_again;
    cout << "What is density in (kg/m3)?\n";
    cin >> rho;
    cout << "What is the velocity in (m/s)" << endl;
    cin >> U;
    cout << "What is the dynamic viscosity" << endl;
    cin >> mu;
    cout << "What is the characteristic length? (m)" << endl;
    cin >> D;
    cout << "So the Reynolds number is:" << endl;
    cout << (rho*U*D)/mu << endl;
    return 0;
}