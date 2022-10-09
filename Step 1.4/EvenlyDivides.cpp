#include <iostream>
using namespace std;

int EvenlyDivides(int n)
{
    int x = n;
    int count = 0;
    while (x > 0)
    {
        int num = x % 10;
        if (num != 0)
        {
            if (n % num == 0)
                count++;
        }
        x = x / 10;
    }
    return count;
}

int main()
{
    int n = 12;
    cout << "Count evenly divided numbers " << EvenlyDivides(n);
    return 0;
}