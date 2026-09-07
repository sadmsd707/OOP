#include <iostream>
using namespace std;

void accept(int &m, int ar[])
{
    cout << "Enter array size: " << endl;
    cin >> m;

    cout << "Enter elements in array: " << endl;
    for(int k = 0; k < m; k++)
    {
        cin >> ar[k];
    }
}

void display(int m, int ar[])
{
    cout << "Displaying sorted array elements: ";

    for(int k = 0; k < m; k++)
    {
        cout << ar[k] << " ";
    }

    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int m, int ar[])
{
    for(int i = 0; i < m - 1; i++)
    {
        for(int j = 0; j < m - 1; j++)
        {
            if(ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }
}

int main()
{
    int n, ar[10];

    accept(n, ar);
    sort(n, ar);
    display(n, ar);

    return 0;
}
