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
        if (img > 0)
        {
            cout << "\n" << real << "+i" << img;
        }
        else
        {
            cout << "\n" << real << "-i" << -img;
        }
    }

    complex add(complex c)
    {
        complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }

    complex subs(complex c)
    {
        complex subs;
        subs.real = real - c.real;
        subs.img = img - c.img;
        return subs;
    }

    complex product(complex c)
    {
        complex product;
        product.real = real * c.real - img * c.img;
        product.img = real * c.img + img * c.real;
        return product;
    }

    complex div(complex c)
    {
        complex div;
        int denominator = c.real * c.real + c.img * c.img;

        div.real = (real * c.real + img * c.img) / denominator;
        div.img = (img * c.real - real * c.img) / denominator;

        return div;
    }

    complex conjugate()
    {
        complex con;
        con.real = real;
        con.img = -img;
        return con;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.accept(4,5);
    cout << "first no. is:";
    c1.display();

    c2.accept(2,3);
    cout << "\nsecond no. is:";
    c2.display();

    c3 = c1.add(c2);
    cout << "\naddition is:";
    c3.display();

    c3 = c1.subs(c2);
    cout << "\nsubstraction is:";
    c3.display();

    c3 = c1.product(c2);
    cout << "\nmultiplication is:";
    c3.display();

    c3 = c1.div(c2);
    cout << "\ndivision is:";
    c3.display();

    c3 = c1.conjugate();
    cout << "\ncomplex conjugate of first number is:";
    c3.display();

    return 0;
}
