/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve(string str) {
    if (str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
    cout << str;
}
int main()
{
    
    string str;
    cin >> str;
    solve(str);

    return 0;
}
