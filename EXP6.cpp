#include <iostream>
using namespace std;

class Complex
{
    float real, imag; 

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(Complex c)
    {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    Complex operator/(Complex c)
    {
        float denominator =
            c.real * c.real + c.imag * c.imag;

        return Complex(
            (real * c.real + imag * c.imag) / denominator,
            (imag * c.real - real * c.imag) / denominator
        );
    }
};

int main()
{
    Complex c1, c2, result; // Calls default constructor for all three

    cout << "Enter first complex number:\n";
    c1.accept();

    cout << "\nEnter second complex number:\n";
    c2.accept();

    result = c1 + c2;
    cout << "\nAddition: ";
    result.display();

    result = c1 - c2;
    cout << "Subtraction: ";
    result.display();

    result = c1 * c2;
    cout << "Multiplication: ";
    result.display();

    result = c1 / c2;
    cout << "Division: ";
    result.display();

    return 0; 
}
