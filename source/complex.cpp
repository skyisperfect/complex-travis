#include "complex.hpp"


	complex::complex(){
Re=0.0;
Im=0.0; 
}
	complex::complex(double RE, double IM){
Re=RE;
Im=IM; 
}
	complex::complex(const complex& sF){
Re=sF.Re;
Im=sF.Im;
}
	void complex::print(ostream& print){
		print << Re << " + " << Im << "i" << endl; 
	}
	
	double complex::real(){
    		return Re;
		}
	double complex::imaginary(){
    	return Im;
		}

	void complex::add(const complex& sF){
		Re += sF.Re;
		Im += sF.Im;
	}

	void complex::sub(const complex& sF){
		Re -= sF.Re;
		Im -= sF.Im;
	}

	void complex::mul(int M){
		Re *= M;
		Im *= M;
	}

	void complex::div(int D){
	try{
		if(D==0){
			throw 1;
		}

		Re /= D;
		Im /= D;
	}catch (int D){
	cout << "btw division by zero" << endl;
	}
}


 complex complex::operator*(const complex& sF){
        return complex(Re*sF.Re - Im*sF.Im, Im*sF.Re + Re*sF.Im);
    }
    complex complex::operator/(const complex& sF){
        return complex((Re*sF.Re + Im*sF.Im)/(sF.Re*sF.Re + sF.Im*sF.Im),(-Re*sF.Im + Im*sF.Re)/(sF.Re*sF.Re + sF.Im*sF.Im));
    }
    complex complex::operator+=(const complex& sF){
        Re += sF.Re;
        Im += sF.Im;
        return complex(Re, Im);
    }
    complex complex::operator-=(const complex& sF){
        Re -= sF.Re;
        Im -= sF.Im;
        return complex(Re, Im);
    }
    complex complex::operator*=(const complex& sF){
        double  tmp;
        tmp = Re*sF.Re - Im*sF.Im;
        Im = Im*sF.Re + Re*sF.Im;
        Re = tmp;
        return complex(Re,Im);
    }
    complex complex::operator/=(const complex& sF){
        double tmp;
        tmp = (Re*sF.Re + Im*sF.Im)/(sF.Re*sF.Re + sF.Im*sF.Im);
        Im =  (-Re*sF.Im + Im*sF.Re)/(sF.Re*sF.Re + sF.Im*sF.Im);
        Re = tmp;
        return complex(Re,Im);
    }
    complex complex::operator=(const complex& sF){
        Re = sF.Re;
        Im = sF.Im;
        return complex(Re,Im);
    }
    bool complex::operator==(const complex& sF){
        return (Re == sF.Re && Im == sF.Im);
    } 
    
   
}
