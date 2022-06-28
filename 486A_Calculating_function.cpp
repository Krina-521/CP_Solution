// For a positive integer n let's define a function f:

// f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

// Your task is to calculate f(n) for a given integer n.

// Input
// The single line contains the positive integer n (1 ≤ n ≤ 1015).

// Output
// Print f(n) in a single line.

// Examples
// input
// 4
// output
// 2
// input
// 5
// output
// -3
// Note
// f(4) =  - 1 + 2 - 3 + 4 = 2

// f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, result = 0;
    cin >> n;
    // for(int i = 0; i < n; ++i)
    // {
    //     int func = (pow(-1,i)) * i;
    //     result += func;
    // }
    // cout << result;
    if(n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        result = -((n + 1)/2);
        cout << result;
    }
    return 0;
}