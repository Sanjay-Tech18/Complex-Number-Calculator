
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";
        return out;
    }
};

int main() {
    int r1, i1, r2, i2;

    cout << "Enter real part of first number: ";
    cin >> r1;

    cout << "Enter imaginary part of first number: ";
    cin >> i1;

    cout << "Enter real part of second number: ";
    cin >> r2;

    cout << "Enter imaginary part of second number: ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "\nFirst Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;

    return 0;
}
