#include <iostream>
using namespace std;
int getRows();
void pascalTriangle(int n);
int main()
{
    int n;
    n = getRows();
    pascalTriangle(n);
    return 0;
}
int getRows()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    return n;
}
void pascalTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "  ";
        }
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << num << "   ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}
