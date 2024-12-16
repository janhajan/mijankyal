#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex &num) const {
        return Complex(real + num.real, imag + num.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(3.5, 2.5);
    Complex num2(1.2, 4.3);
    Complex result = num1 + num2;
    cout << "tiv 1: ";
    num1.display();
    cout << "tiv 2: ";
    num2.display();
    cout << "gumar ";
    result.display();

    return 0;
}