/* Calculating the vector length using vector, part II
written by Tariq Ridwan: 👉 https://tariqridwan.github.io/
Universitat Politècnica de Catalunya, Barcelona */

#include<iostream>
#include<string>
#include<cmath>
using namespace std; // 

double vector_length(double x, double y, double z);
double vector_add(double a, double b, double c);

int main()
{
    double x,y,z,L,a,b,c;
    double sample_vector[3][1] = {{x},{y},{z}};
    double sample_vector2[3][1] = {{a},{b},{c}};
    string write_intro;
    write_intro = "Adding two vectors\n";
    cout << write_intro << endl;

    cout << "What is the value of x?" << endl;
    cin >> x;
    cout << "What is the value of y\n";
    cin >> y;
    cout << "What is the value of z?" << endl;
    cin >> z;
    // cout << sample_vector[3][1] << endl;

    cout << "What is the value of a?" << endl;
    cin >> a;
    cout << "What is the value of b\n";
    cin >> b;
    cout << "What is the value of c?" << endl;
    cin >> c;
    // cout << sample_vector2[3][1] << endl;

    // calculate vector length
    cout << "So the Vector's Length is:" << endl;
    L = vector_length(x, y, z);
    cout << L << endl;

    // // vector addition
    // cout << "So the Vector's Length is:" << endl;
    // L = vector_addition(x, y, z);
    // cout << L << endl;
    // return 0;
}

double vector_length(double x_1, double y_1, double z_1)
{
    double result; // int or double
    result = sqrt( pow(x_1,2.0) + pow(y_1,2.0) + pow(z_1,2.0));
    return result;
}

double vector_add(double i, double j, double k)
{
    double result_add[3][1]; // int or double
    return result_add;
}