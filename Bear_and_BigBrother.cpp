/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b) {
    int cnt = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        cnt += 1;
    }
    cout << cnt;
}
int main()
{
    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
