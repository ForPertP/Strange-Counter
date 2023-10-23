#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'strangeCounter' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER t as parameter.
 */

long strangeCounter(long t)
{
    long result = 3;
    
    while (t > result)
    {
        t -= result;
        result *= 2;
    }

    return result - t + 1;
}


long strangeCounter1(long t)
{
    long result = 4;

    while (t >= result)
    {
        result = result * 2 + 2;
    }
    
    return result - t;
}
