#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b, float c)
{
    return a + b + c;
}
int main()
{
    int a, b;
    float x, y, z;
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    cout << "Addition of 2 integers = " << add(a, b) << endl;
    cout << "Enter 3 float numbers: ";
    cin >> x >> y >> z;
    cout << "Addition of 3 float numbers = " << add(x, y, z);
    return 0;
}
