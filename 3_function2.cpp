/* calculating the Reynolds number using a "double" function
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
// #include<cmath>
using namespace std;

double Reynolds(double rho, double U, double mu, double D);

int main()
{
    double U, rho, mu, D, Re;
    string write_intro;
    write_intro = "Calculating Reynolds number\n";
    cout << write_intro;

    cout << "What is the velocity in (m/s)?" << endl;
    cin >> U;

    cout << "What is density in (kg/m3)?\n";
    cin >> rho;

    cout << "What is the dynamic viscosity?" << endl;
    cin >> mu;

    cout << "What is the characteristic length (m)?" << endl;
    cin >> D;

    cout << "So the Reynolds number is:" << endl;
    Re = Reynolds(rho,U,mu,D);
    cout << Re << endl;
    return 0;
}

double Reynolds(double rho, double U, double mu, double D)
{
    int result; // int or double
    result = rho*U*D/mu;
    return result;
}