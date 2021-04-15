#include<iostream>
#include<algorithm>

using namespace std;

int n;
int w[7] = { 0,5,3,3,2,1,4 };
int v[7] = { 0,1,2,2,2,3,5 };
int dp[7][15];

int main3() {
    cin >> n;
    for (int i = 1; i <= 6; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= v[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
        }
    }
    cout << dp[6][n] << endl;
    return 0;
}