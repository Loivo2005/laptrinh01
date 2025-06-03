#include <iostream>
using namespace std;

int mySqrt(int n) {
    if (n < 2) return n; 

    int left = 1, right = n / 2, result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (mid <= n / mid) {
            result = mid; 
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Nhập số nguyên không âm: ";
    cin >> n;
    cout << "Căn bậc hai (làm tròn xuống) của " << n << " là: " << mySqrt(n) << endl;
    return 0;
}
