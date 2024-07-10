#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize the complex number
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Friend function to add two Complex objects
    friend Complex addComplex(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    // Create two Complex objects
    Complex c1(3.4, 5.7);
    Complex c2(2.6, 3.3);

    // Add the complex numbers using the friend function
    Complex c3 = addComplex(c1, c2);

    // Output the result
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
