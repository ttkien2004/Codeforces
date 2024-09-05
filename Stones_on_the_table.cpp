/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve(string str, int n) {
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(str[i] == str[i+1]) {
            cnt += 1;
        }
    }
    cout << cnt;
}
int main()
{
    int n;
    string str;
    cin >> n >> str;
    solve(str, n);
    return 0;
}
