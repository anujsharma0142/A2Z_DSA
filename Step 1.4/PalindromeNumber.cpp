#include <iostream>
using namespace std;

void PalindromeNumber(int n)
{
    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        int digits = temp % 10;
        rev = rev * 10 + digits;
        temp = temp / 10;
    }
    if (rev == n)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is Not Palindrome" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    PalindromeNumber(n);
    return 0;
}