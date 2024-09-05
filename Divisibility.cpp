/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int help(int a, int b, int cnt) {
    if (a % b == 0) return cnt;
    return help(a+1,b,cnt+1);
}
void solve(int n, int arr[][2]) {
    for (int i = 0; i < n; i++) {
        cout << help(arr[i][0], arr[i][1], 0) << '\n';
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }
    solve(n, arr);

    return 0;
}
