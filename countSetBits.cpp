#include <iostream>
using namespace std;

int count(int num)
{
    int cnt = 0;
    while (num > 0)
    {
        num = num & num - 1;
        cnt ++; 
    }
    return cnt;
}

// traditional way

// int count(int num)
// {
//     int cnt = 0;

//     while (num >= 1)
//     {
//         if (num & 1)
//         {
//             cnt++;
//         }
//         num >>= 1;
//     }

//     if (num == 1) cnt++;

//     return cnt;
// }

int main()
{
    cout << count(255);

    return 0;
}