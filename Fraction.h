class Fraction{
private :
	int denom;
	int numo;
public:
	Fraction(int num, int den);

	void getNumDenom(int num, int den);
	void setNumDenom(int *num, int *den);
	Fraction& operator+ (const Fraction& other); //declaration for operator overloaded function 

	//double add(int num, int den);
	//double subtract(int num, int den);
	double multiply(int num, int den);
	double divide(int num, int den);
	void display();

};