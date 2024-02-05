/* 1st using the cmath library for math operation to calculate kinetic energy
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    double m,v;
    float c;
    string write_something,again_write,man_write_again;
    write_something = "Calculating kinetic energy\n";
    again_write = "by the way do you know why loko is always angry¿¿\n";
    man_write_again = "Yes coz he is a loko\n";
    cout << write_something;
    cout << again_write;
    cout << man_write_again;
    cout << "What is the mass?\n";
    cin >> m;
    cout << "What is the velocity" << endl;
    cin >> v;
    cout << "So the kinetic energy is:" << endl;
    cout << (1.0/2.0)*m*pow(v,2) << endl;
    cout << "One way of writing square root of 2" << endl;
    cout << sqrt(2.0) << endl;
    cout << "Another way of writing square root of 2" << endl;
    cout << pow(2.0,0.5) << endl;
    cout << "Do you see sqrt and pow? cmath library was added to use such math operations";
    cout << "A simple subtraction operation:" << endl;
    cout << 2-3.555 << endl;
    return 0;
}