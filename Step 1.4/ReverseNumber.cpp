#include <iostream>
using namespace std;

int ReverseNumber(int n)
{
    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        int digits = temp % 10;
        rev = rev * 10 + digits;
        temp = temp / 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    cout << "Reverse Number is : " << ReverseNumber(n);
    return 0;
}