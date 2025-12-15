#include <iostream>
using namespace std;

int clearIthBit(int num, int i)
{
    return num & ~(1 << i);
}

int main()
{
    cout<< clearIthBit(13,0);

    return 0;
}