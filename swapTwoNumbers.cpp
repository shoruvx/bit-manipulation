#include <iostream>
using namespace std;

void swap (int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;
}

int main()
{
    swap(7,8);

    return 0;
}