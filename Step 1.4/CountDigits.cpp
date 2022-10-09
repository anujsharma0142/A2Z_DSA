#include <iostream>
using namespace std;

int CountDigits(int n)
{
    int x = n;
    int count = 0;
    while (x > 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}

int main()
{
    int n = 12345;
    cout << "Check number of Digits in " << CountDigits(n);
    return 0;
}