#include <iostream>
#include <cmath>
using namespace std;

void naive(long long int n)
{
    int c = 0;
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= n; ++j)
            if (i*i*i + j*j*j == n)
            {
                cout << i << "^3 + " << j << "^3 == " << n << endl;
                c++;
            }
    cout << "So cap thoa man la: " << c << endl;
}

void improve(long long int n)
{
    int c = 0;
    for (int i = 1; i <= cbrt(n); ++i)
    {
        int cb = i*i*i;
        int diff = n - cb;
        int cbrtDiff = cbrt(diff);
        if (cbrtDiff*cbrtDiff*cbrtDiff == diff)
        {
             cout << i << "^3 + " << cbrtDiff << "^3 == " << n << endl;
             c++;
        }
    }
      cout << "So cap thoa man la: " << c << endl;
}


int main()
{
    long long int test[] = {9, 28, 36, 47, 89, 559, 1729, 4104, 87539319, 6963472309248};

    for (long long int i : test)
    {
        cout << "Voi n = " << i << " thi:\n";
        improve(i);
        cout << endl;
    }
     for (long long int i : test)
    {
        cout << "Voi n = " << i << " thi:\n";
        naive(i);
        cout << endl;
    }


    return 0;
}
