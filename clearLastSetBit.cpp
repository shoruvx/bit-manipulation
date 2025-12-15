#include <iostream>
using namespace std;

int clear(int num)
{
    return num & (num - 1);
}

int main()
{
    cout << clear(12);
    return 0;
}