#include<iostream>
using namespace std;

class complex
{
    int real, img;

    public:

    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        if(img > 0)
        {
            cout << real << "+i" << img;
        }
        else
        {
            cout << real << "-i" << -img;
        }
    }

    complex operator+(complex c)
    {
        complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }

    complex operator-(complex c)
    {
        complex sub;
        sub.real = real - c.real;
        sub.img = img - c.img;
        return sub;
    }

    complex operator*(complex c)
    {
        complex product;
        product.real = real * c.real - img * c.img;
        product.img = real * c.img + img * c.real;
        return product;
    }

    complex operator/(complex c)
    {
        complex div;
        int denominator = c.real * c.real + c.img * c.img;

        div.real = (real * c.real + img * c.img) / denominator;
        div.img = (img * c.real - real * c.img) / denominator;

        return div;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.accept(4,5);
    cout << "First no. is: ";
    c1.display();

    c2.accept(2,3);
    cout << "\nSecond no. is: ";
    c2.display();

    c3 = c1 + c2;
    cout << "\nAddition is: ";
    c3.display();

    c3 = c1 - c2;
    cout << "\nSubtraction is: ";
    c3.display();

    c3 = c1 * c2;
    cout << "\nMultiplication is: ";
    c3.display();

    c3 = c1 / c2;
    cout << "\nDivision is: ";
    c3.display();

    return 0;
}
