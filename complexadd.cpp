#include <iostream>
#include <cmath>

int main();
class Complex {

private:
	double real_;
	double imag_;

public:
	Complex();
	Complex(double new_real, double new_imag);
	void add_value(double add_real, double add_imag);
	void add_value(Complex add_complex);
	void get_value(double &real_val, double &imag_val);
};

Complex::Complex() {
	real_ = 0.0;
	imag_ = 0.0;
}

Complex::Complex(double new_real, double new_imag) {
	real_ = new_real;
	imag_ = new_imag;
}

void Complex::add_value(double add_real, double add_imag) {
	real_ += add_real;
	imag_ += add_imag;
}

void Complex::add_value(Complex add_complex) {

	real_ += add_complex.real_;
	imag_ += add_complex.imag_;

}

void Complex::get_value(double &real_val, double &imag_val) {
real_val = real_;
imag_val = imag_;
}

int main(){

	std::cout << "Hello World!" << std::endl;

	return 0;
}























