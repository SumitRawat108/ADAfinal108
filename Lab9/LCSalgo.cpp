#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

string getLCS(string s1, string s2) {
    int m = s1.length(), n = s2.length();

    int dp[100][100]; 

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    string res = "";
    int i = m, j = n;

    while (i > 0 && j > 0) {
        if (s1[i-1] == s2[j-1]) {
            res = s1[i-1] + res;
            i--; j--;
        }
        else if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }

    return res;
}

int main() {
    int k;
    cout << "Enter number of strings: ";
    cin >> k;

    string result, nextStr;

    cout << "Enter strings:\n";
    cin >> result;

    for (int i = 1; i < k; i++) {
        cin >> nextStr;
        result = getLCS(result, nextStr);
    }

    cout << "\nCommon LCS: " << (result == "" ? "None" : result);
    cout << "\nLength: " << result.length();

    return 0;
}