/* calculating the Reynolds number using function
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
// #include<cmath>
using namespace std;

void Reynolds(double rho, double U, double mu, double D);

int main()
{
    double U, rho, mu, D;
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
    Reynolds(rho,U,mu,D);
    return 0;
}

void Reynolds(double rho, double U, double mu, double D)
{
    cout << rho*U*D/mu << endl;
}