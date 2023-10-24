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

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    long t = stol(ltrim(rtrim(t_temp)));

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}

