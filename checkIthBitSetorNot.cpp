#include <iostream>
using namespace std;

int checkIthBit(int num, int i)
{
    if (num & 1 << i)
        return 1;
    else
        return 0;
}

int main()
{
    cout << checkIthBit(13,2);
    return 0;
}