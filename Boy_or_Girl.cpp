/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve(string str) {
    int arr[26] = {0}, count = 0;
    for (int i = 0; i < str.length(); i++){
        if (arr[str[i] - 'a'] == 0) {
            arr[str[i] - 'a'] += 1;
        }
    }
    for (int i = 0 ; i < 26; i++){
        count += arr[i];
    }
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    }else {
        cout << "IGNORE HIM!";
    }
}
int main()
{
    
    string str;
    cin >> str;
    solve(str);

    return 0;
}
