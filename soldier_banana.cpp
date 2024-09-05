/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c) {
    int res = 0, sum = 0;
    for (int i = 0; i < c; i++){
        sum += (i + 1)*a;
    }
    if (sum > b) {
        cout << sum - b;
    }else {
        cout << 0;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}
