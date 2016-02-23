#include <iostream>
class Fraction{
private:
	int denom;
	int numo;

public: 
	Fraction(int num , int den) {
		denom = den;
		numo = num 
	}


	~Fraction(){

	}

	void getNumDenom(int num, int den){
		numo = num;
		denom = den;
	}

	void setNumDenom( int *num, int *den){
		*num = numo;
		*den = denom;
	}

	double add(int num, int den){
		return num / den + numo / denom;

	}

	double subtract(int num, int den){
		return add(num, -den);
	}

	double multiply(int num, int den){
		return num / den * numo / denom;
	}

	double divide(int num , int den){
		return multiply(den,num);
	}

};