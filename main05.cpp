#include <iostream>
#include <vector>
using namespace std;
int fibonacci (int n) {
    if(n <= 1) return n;
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; ++i){
        dp[i] = dp[i-1]+ dp[i-2];
        cout << i << " - " << dp[i] << endl;
    }
    return dp[n];
}
int main() {
    int n;
    cin >> n; // fibo(2) = 1
    int c = fibonacci(n);
    cout << "fibo(" << n << ") = " << c << endl;

}