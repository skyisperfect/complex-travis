#include "complex.hpp"
Complex::Complex():Re(0.0),Im(0.0){};
Complex::Complex(double re, double im): Re(re), Im(im){}
Complex::Complex(const Complex& sF): Re(sF.Re), Im(sF.Im){}

void Complex::print(ostream& os){
    if(Im < 0){
        os << Re << Im << "i" << endl;
    }else{
        os << Re <<"+"<< Im << "i" << endl;
    }
}

double Complex::real(){
    return Re;
}
double Complex::imaginary(){
    return Im;
}


Complex Complex::add(const Complex& sF){
    return Complex(Re+sF.Re, Im+sF.Im);
}
Complex Complex::sub(const Complex& sF){
    return Complex(Re-sF.Re, Im-sF.Im);
}
Complex Complex::mul(int number){
    return Complex(Re*number, Im*number);
}
Complex Complex::div(int number){
    try{
        if(number == 0){
            throw 1;
        }
        Re = Re/number;
        Im = Im/number;
    }catch (int number){
        cout << "Division by zero" << endl;

    }
    return Complex(Re, Im);
}

Complex Complex::operator*(const Complex& sF){
    return Complex(Re*sF.Re - Im*sF.Im, Im*sF.Re + Re*sF.Im);
}
Complex Complex::operator/(const Complex& sF){
    return Complex((Re*sF.Re + Im*sF.Im)/(sF.Re*sF.Re + sF.Im*sF.Im),(-Re*sF.Im + Im*sF.Re)/(sF.Re*sF.Re + sF.Im*sF.Im));
}
Complex Complex::operator+=(const Complex& sF){
    Re += sF.Re;
    Im += sF.Im;
    return Complex(Re, Im);
}
Complex Complex::operator-=(const Complex& sF){
    Re -= sF.Re;
    Im -= sF.Im;
    return Complex(Re, Im);
}
Complex Complex::operator*=(const Complex& sF){
    double  tmp;
    tmp = Re*sF.Re - Im*sF.Im;
    Im = Im*sF.Re + Re*sF.Im;
    Re = tmp;
    return Complex(Re,Im);
}
Complex Complex::operator/=(const Complex& sF){
    double tmp;
    tmp = (Re*sF.Re + Im*sF.Im)/(other.Re*sF.Re + sF.Im*sF.Im);
    Im =  (-Re*sF.Im + Im*sF.Re)/(sF.Re*sF.Re + sF.Im*sF.Im);
    Re = tmp;
    return Complex(Re,Im);
}
Complex Complex::operator=(const Complex& sF){
    Re = sF.Re;
    Im = sF.Im;
    return Complex(Re,Im);
}
bool Complex::operator==(const Complex& sF){
    return (Re == sF.Re && Im == sF.Im);
}
