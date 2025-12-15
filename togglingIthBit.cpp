#include <iostream>
using namespace std;

int toggle(int num, int i)
{
    return num ^ 1 << i;
}

int main()
{
    
    cout << toggle(13,1);
    return 0;
}