#pragma once
class Complex {
private:
	double real;
	double imaginary;

public:
	Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

	double getReal() const {
		return real;
	}

	double getImaginary() const {
		return imaginary;
	}

	Complex operator+(const Complex& other) const {
		double newReal = real + other.real;
		double newImaginary = imaginary + other.imaginary;
		return Complex(newReal, newImaginary);
	}

	bool operator!=(const Complex& other) const {
		return (real != other.real) || (imaginary != other.imaginary);
	}
};
