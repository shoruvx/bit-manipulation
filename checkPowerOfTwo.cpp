#include <iostream>
using namespace std;

int power(int num)
{
    return ((num & (num - 1)) == 0);
}

int main()
{    
    cout << power(8);
    return 0;
}