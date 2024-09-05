/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


void solve(int n, int cnt, int * arr) {
    bool res[n] = {false};
    for (int i = 1; i < arr[0]+1; i++) {
        if (!res[arr[i] - 1]) {
            res[arr[i] - 1] = true;   
        }
    }
    for (int i = arr[0] + 1; i < cnt; i++){
        if (!res[arr[i] - 1]) {
            res[arr[i] - 1] = true;   
        }
    }
    for (int i = 0; i < n; i++){
        if (!res[i]) {
            cout << "Oh, my keyboard!";
            return;
        }
    }
    cout << "I become the guy.";
}
int main()
{
    int n, i = 0;
    cin >> n;
    int arr[1000];
    while(cin >> arr[i]) {
        i += 1;
    }
    solve(n, i, arr);

    return 0;
}
