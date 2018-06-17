
#ifndef LAB_6_COMPLEX_H
#define LAB_6_COMPLEX_H


#include <iostream>

using namespace std;
class complex
{
private:
    double Re, Im;
public:
    complex();
    complex(double, double);
    void print(ostream&);
    complex add(const complex&);
    complex sub(const complex&);
    complex mul(int a);
    complex div(int a);
    double real();
    double imaginary();
    complex(const complex&);
    complex operator*(const complex&);
    complex operator/(const complex&);
    complex operator+=(const complex&);
    complex operator-=(const complex&);
    complex operator*=(const complex&);
    complex operator/=(const complex&);
    complex operator=(const complex&);
    bool operator==(const complex&);

};

#endif //LAB_6_COMPLEX_H
