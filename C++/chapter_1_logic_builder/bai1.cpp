#include <iostream>
using namespace std;

void checkEvenOrOdd_Naive(int n)
{
    if (n%2)
        cout << n << " is odd number\n";
    else
        cout << n << " is even number\n";
}

void checkEvenOrOdd_UsingBitWise(int n)
{
    if (n&1)
        cout << n << " is odd number\n";
    else
        cout << n << " is even number\n";
}

int main()
{
    int n = 1;
    int m = 2;
    checkEvenOrOdd_Naive(n);
    checkEvenOrOdd_Naive(m);
    checkEvenOrOdd_UsingBitWise(n);
    checkEvenOrOdd_UsingBitWise(m);
    return 0;
}
