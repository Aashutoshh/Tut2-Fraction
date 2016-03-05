#include <iostream>
using namespace std;
class Fraction{
private:
	//variables are not to be accessed from outside hence private
	int denom;
	int numo;

public: 
	//constructor to set defualt values
	Fraction(int num , int den) {
		denom = den;
		numo = num;
		
	}

	//deconstructor 
	~Fraction(){

	}


	//accsessor and mutator methods
	void setNumDenom(int num, int den){
		numo = num;
		denom = den;
	}

	void getNumDenom( int *num, int *den){
		*num = numo;
		*den = denom;

	}

	//operational methods

	//operator overloading
	Fraction& operator+ (Fraction& other){
		return Fraction( other.numo* denom + numo * other.denom, other.denom* denom ) ;
	}

	Fraction& operator- (Fraction& other){
		return Fraction(numo * other.denom - other.numo* denom, other.denom* denom);
	}

	Fraction& operator* (Fraction& other){
		return Fraction(other.numo * numo, other.denom* denom);
	}

	Fraction& operator/ (Fraction& other){
		return Fraction(other.denom * numo, other.numo * denom);
	}

	/*double subtract(int num, int den){
		return add(num, -den);
	}

	double multiply(int num, int den){
		return num / den * numo / denom;
	}

	double divide(int num , int den){
		return multiply(den,num);
	}
	*/
	void display(){
		cout << numo / denom << " " << numo % denom << "/" << denom << endl;
	}

};
//AASHUTOSHH RAMPERSADH 214506607


int main(){
	Fraction a(5 , 4);
	Fraction b(3,4);
	Fraction c = a + b;
	Fraction d = a - b;
	Fraction e = a*b;
	Fraction f = a / b;
	//cout << "...."<< a.add(5, 4) << endl;

	c.display();
	d.display();
	e.display();
	f.display();

}